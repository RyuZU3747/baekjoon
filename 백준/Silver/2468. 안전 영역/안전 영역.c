#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int mat[1001][1001];

int n,cnt;

bool visited[1001][1001];

int direction[4][2]={
	{0,1}, //우
	{0,-1},//좌
	{1,0},//하
	{-1,0},//상
};

void dfs(int y,int x, int suwi){
	if(visited[y][x]||mat[y][x]==0) return;
	visited[y][x]=true;
	for(int i=0;i<4;i++){
		int nexty=y+direction[i][0];
		int nextx=x+direction[i][1];
		if(nextx>=0&&nextx<=n&&nexty>=0&&nexty<=n&&mat[nexty][nextx]>suwi){
			dfs(nexty,nextx,suwi);
		}
	}
}

int main(){
	int max=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	for(int k=0;k<101;k++){
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) visited[i][j]=0;
		cnt=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(visited[i][j]==0&&mat[i][j]>k){
					cnt++;
					dfs(i,j,k);
				}
			}
		}
		max=Max(max,cnt);
	}
	printf("%d\n",max);
}