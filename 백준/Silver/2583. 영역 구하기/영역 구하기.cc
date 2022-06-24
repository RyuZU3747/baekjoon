#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int arr[101][101];
int visited[101][101];
queue<tuple<int, int, int>> q; //넓이 y x
vector<int> ans; 
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};


int main(){
	int m,n,k,cnt = 0;
	cin>>m>>n>>k;
	for(int i=0;i<k;i++){
		int x1,y1,x2,y2;
		cin>>x1>>y1;
		cin>>x2>>y2;
		for(int x=x1;x<x2;x++){
			for(int y=y1;y<y2;y++){
				arr[y][x] = 1;
			}
		}
	}
	for(int y=0;y<m;y++){
		for(int x=0;x<n;x++){
			int w=1;
			if(arr[y][x]==0&&visited[y][x]==0){
				cnt+=1;
				q.push(make_tuple(1,y,x));
				visited[y][x] = 1;
				while(!q.empty()){
					int y_ = get<1>(q.front());
					int x_ = get<2>(q.front());
					q.pop();
					for(int i=0;i<4;i++){
						int ny = y_ + dy[i];
						int nx = x_ + dx[i];
						if(ny>=0&&ny<m&&nx>=0&&nx<n&&visited[ny][nx]==0&&arr[ny][nx]==0){
							q.push(make_tuple(1,ny,nx));
							w+=1;
							visited[ny][nx] = 1;
						}	
					}
				}
				ans.push_back(w);
			}
		}
	}
	sort(ans.begin(),ans.end());
	cout<<cnt<<'\n';
	for(int i=0;i<cnt;i++) cout<<ans[i]<<' ';
}