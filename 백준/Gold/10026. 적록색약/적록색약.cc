#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

char mp[101][101];
int visited[101][101];
queue<int> q;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void dfs(int y, int x, char color){
	if(visited[y][x]==1) return;
	visited[y][x]=1;
	for(int i=0;i<4;i++){
		int nexty = y+dy[i];
		int nextx = x+dx[i];
		if(visited[nexty][nextx]==0&&color==mp[nexty][nextx]){
			dfs(nexty,nextx,color);
		}
	}
}

void ndfs(int y, int x, char color){
	if(visited[y][x]==1) return;
	visited[y][x]=1;
	for(int i=0;i<4;i++){
		int nexty = y+dy[i];
		int nextx = x+dx[i];
		if(visited[nexty][nextx]==0){
			if(color=='R'||color=='G'){
				if(mp[nexty][nextx]=='R'||mp[nexty][nextx]=='G') ndfs(nexty,nextx,color);
			}
			else if(color==mp[nexty][nextx]) ndfs(nexty,nextx,color);
		}
	}
}

int main(){
	int n,colorcnt=0,nocolorcnt=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf(" %c",&mp[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==0){
				dfs(i,j,mp[i][j]);
				colorcnt++;
			}
		}
	}
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) visited[i][j]=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==0){
				ndfs(i,j,mp[i][j]);
				nocolorcnt++;
			}
		}
	}
	printf("%d %d",colorcnt,nocolorcnt);
}