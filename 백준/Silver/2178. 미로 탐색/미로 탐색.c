#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

int visited[101][101],mat[101][101],ans[101][101];
int n,m,length;

int front,rear;

int dir[4][2]={
	{1,0},//하
	{0,1},//우
	{-1,0},//상
	{0,-1},//좌
};

struct queue{
	int y;
	int x;
}queue[10001];


void dfs(int y, int x, int len){
	if(visited[y][x]) return;
	visited[y][x]=1;
	if(y==n-1&&x==m-1)	length=Min(length,len);
	for(int i=0;i<4;i++){
		int nexty = y+dir[i][0];
		int nextx = x+dir[i][1];
		if(mat[nexty][nextx]) dfs(nexty,nextx,len+1);
	}
	visited[y][x]=0;
}

void bfs(){
	visited[0][0]=1;
	queue[rear].y=0;
	queue[rear].x=0;
	rear++;
	while(front!=rear){
		int y=queue[front].y;
		int x=queue[front].x;
		front++;
		for(int i=0;i<4;i++){
			int nexty=y+dir[i][0];
			int nextx=x+dir[i][1];
			if(nexty>=0&&nexty<n&&nextx>=0&&nextx<m&&mat[nexty][nextx]==1&&visited[nexty][nextx]==0){
				visited[nexty][nextx]=1;
				ans[nexty][nextx]=ans[y][x]+1;
				queue[rear].y=nexty;
				queue[rear].x=nextx;
				rear++;
			}
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf("%1d",&mat[i][j]);
	}
	/*length=123456789;
	dfs(0,0,1);
	printf("%d",length);*/
	bfs();
	printf("%d",ans[n-1][m-1]+1);
}