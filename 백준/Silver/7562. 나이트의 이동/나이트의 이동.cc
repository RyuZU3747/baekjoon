#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int visited[301][301];
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {1,-1,2,-2,2,-2,1,-1};
int l,herex,herey,gox,goy;
queue<tuple<int,int,int>> q;

int main(){
	int tc;
	scanf("%d",&tc);
	while(tc--){
		while(!q.empty()) q.pop();
		for(int i=0;i<301;i++) for(int j=0;j<301;j++) visited[i][j]=0;
		scanf("%d",&l);
		scanf("%d %d",&herex,&herey);
		scanf("%d %d",&gox,&goy);
		q.push(make_tuple(herex,herey,0));
		visited[herex][herey]=1;
		while(!q.empty()){
			herex = get<0>(q.front());
			herey = get<1>(q.front());
			int cnt = get<2>(q.front());
			q.pop();
			if(herex==gox&&herey==goy){
				printf("%d\n",cnt);
				break;
			}
			for(int i=0;i<8;i++){
				int nextx = herex + dx[i];
				int nexty = herey + dy[i];
				if(nextx>=0&&nexty>=0&&nextx<l&&nexty<l&&visited[nextx][nexty]!=1){
					visited[nextx][nexty]=1;
					q.push(make_tuple(nextx,nexty,cnt+1));
				}
			}
		}
	}
}