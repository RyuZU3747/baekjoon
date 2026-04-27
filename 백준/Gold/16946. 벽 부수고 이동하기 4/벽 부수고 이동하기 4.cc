#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int mp[1010][1010];
ll ans[1010][1010];
int root[1000001];
queue<pair<int,int>> q;
queue<pair<int,int>> q0;
int dx[4] = {0,0,-1,1};
int dy[4] = {-1,1,0,0};
int visited[1010][1010];

int find(int x){
	if(x<0||x>1000000) return 123456789;
	return root[x] = root[x]==x ? x : find(root[x]);
}

void Union(int x, int y){
	
	x = find(x);
	y = find(y);
	if(x>y) root[x]=y;
	else root[y]=x;
	return;
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		for(int j=0;j<m;j++){
			mp[i][j] = tmp[j]-'0';
			root[i*m+j] = i*m+j;//0123\n4567
		}
	}
	

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ll cnt = 1;
			if(visited[i][j]) continue;
			if(mp[i][j]==0){
				
				q.push(make_pair(i,j));
				visited[i][j]=1;
				while(!q.empty()){
					int x = q.front().second;
					int y = q.front().first;
					q.pop();
					q0.push(make_pair(y,x));
					for(int k=0;k<4;k++){
						int nextx = x+dx[k];
						int nexty = y+dy[k];
						if(visited[nexty][nextx]) continue;
						if(nextx>=0&&nextx<m&&nexty>=0&&nexty<n&&mp[nexty][nextx]==0){
							visited[nexty][nextx]=1;
							cnt++;
							q.push(make_pair(nexty,nextx));
						}
					}
				}
				while(!q0.empty()){
					int y = q0.front().first;
					int x = q0.front().second;
					q0.pop();
					ans[y][x] = cnt;
					Union(i*m+j,y*m+x);
				}
			}
			else ans[i][j] = 0;
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(mp[i][j]==1){
				ll tmp = 1; //상하좌우
				
				if(i-1>=0&&i+1<n&&j-1>=0&&j+1<m&&find((i-1)*m+j)==find((i+1)*m+j)&&find(i*m+(j-1))==find(i*m+(j+1))&&find((i-1)*m+j)==find(i*m+(j-1))) tmp += ans[i-1][j];
				else{
					int added[4]={0,};
					for(int k=0;k<4;k++){
						int di = i+dy[k];
						int dj = j+dx[k];
						if(di<0||di>=n||dj<0||dj>=m) continue;
						if(added[k]==1) continue;
						added[k]=1;
						tmp+=ans[di][dj];
						for(int _=0;_<4;_++){
							int _i = i+dy[_];
							int _j = j+dx[_];
							if(_i<0||_i>=n||_j<0||_j>=m) continue;
							if(find(di*m+dj)!=123456789&&find(_i*m+_j)!=123456789&&find(di*m+dj)==find(_i*m+_j)) added[_]=1;
						}
					}
					
				}
				
				
				cout<<tmp%10;
			}
			else cout<<"0";
		}
		cout<<'\n';
	}
}