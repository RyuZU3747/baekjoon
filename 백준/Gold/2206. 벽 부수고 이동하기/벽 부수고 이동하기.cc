#include <iostream>
#include <queue>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;
//2206번

int board[1001][1001]; //가로 세로
bool visited[1001][1001][2];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n, m;

int bfs(){
	queue<pair<pair<int,int>,pair<bool,int>>> q; //가로 세로 벽 길이
	visited[1][1][0]=true;
	q.push(make_pair(make_pair(1,1),make_pair(false,1)));
	while(!q.empty()){
		int x = q.front().first.first;
		int y = q.front().first.second;
		bool breakwall = q.front().second.first;
		int dis = q.front().second.second;
		q.pop();
		if(x==n&&y==m){
			return dis;
		}
		for(int i=0;i<4;i++){
			int nextx = x+dx[i];
			int nexty = y+dy[i];
			if(nexty<=0||nexty>m||nextx<=0||nextx>n) continue;	
			if(board[nextx][nexty]==1&&breakwall==0){
				q.push(make_pair(make_pair(nextx,nexty),make_pair(true,dis+1)));
				visited[nextx][nexty][1]=true;
			}
			else if(board[nextx][nexty]==0&&visited[nextx][nexty][breakwall]==false){
				q.push(make_pair(make_pair(nextx,nexty),make_pair(breakwall,dis+1)));
				visited[nextx][nexty][breakwall]=true;
			}
		}
	}
	return -1;
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%1d",&board[i][j]);
		}
	}
	printf("%d",bfs());
}