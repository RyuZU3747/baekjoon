#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;
//14502번

queue<pair<int,int>> q;
int board[9][9], tmpb[9][9]; //가로 세로
int visited[9][9];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n, m, ans;

void bfs(){
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int nextx = x+dx[i];
			int nexty = y+dy[i];
			if(nexty>=0&&nexty<m&&nextx>=0&&nextx<n){
				if(visited[nextx][nexty]==1) continue;
				if(tmpb[nextx][nexty]==0){
					q.push(make_pair(nextx,nexty));
					tmpb[nextx][nexty]=2;
					visited[nextx][nexty]=1;
				}
			}
		}
	}
}

void backtrac(int wall){
	if(wall==3){
		int cnt=0;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				visited[i][j]=0;
				tmpb[i][j]=board[i][j];
				if(board[i][j]==2){
					q.push(make_pair(i,j));
				}
			}
		}
		bfs();
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(tmpb[i][j]==0) cnt++;
			}
		}
		ans = Max(ans,cnt);
		return;
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(board[i][j]==0){
				board[i][j]=1;
				backtrac(wall+1);
				board[i][j]=0;
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&board[i][j]);
			if(board[i][j]==2){
				q.push(make_pair(i,j));
			}
		}
	}
	backtrac(0);
	printf("%d",ans);
}