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

int w,h,cnt;

bool visited[1001][1001];

int direction[8][2]={
	{1,1},//우하
	{0,1}, //우
	{0,-1},//좌
	{1,0},//하
	{-1,0},//상
	{-1,1},//우상
	{-1,-1},//좌상
	{1,-1},//좌하
};

void dfs(int y,int x){
	if(visited[y][x]||mat[y][x]==0) return;
	visited[y][x]=true;
	for(int i=0;i<8;i++){
		int nexty=y+direction[i][0];
		int nextx=x+direction[i][1];
		if(nextx>=0&&nextx<=w&&nexty>=0&&nexty<=h&&mat[nexty][nextx]==1){
			dfs(nexty,nextx);
		}
	}
}

int main(){
	while(1){
		for(int i=0;i<1001;i++){
			for(int j=0;j<1001;j++){
				mat[i][j]=0;
				visited[i][j]=0;
			}
		}
		cnt=0;
		
		scanf("%d %d",&w,&h);
		if(h==0&&w==0) break;
		
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				scanf("%1d",&mat[i][j]);
			}
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(visited[i][j]==0&&mat[i][j]==1){
					cnt++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",cnt);
	}
}