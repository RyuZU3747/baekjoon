#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

int n,m,pic[501][501],visited[501][501],cnt,wid,maxwid;

int dir[4][2]={
	{-1,0},
	{1,0},
	{0,1},
	{0,-1}
};

void dfs(int a, int b){
	if(visited[a][b]) return;
	visited[a][b] = 1;
	wid++;
	for(int i=0;i<4;i++){
		int nexta = a+dir[i][0];
		int nextb = b+dir[i][1];
		if(nexta>=0&&nexta<n&&nextb>=0&&nextb<m){
			if(visited[nexta][nextb]==0&&pic[nexta][nextb]==1){
				dfs(nexta,nextb);
			}
		}
	}
	
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&pic[i][j]);
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j]==1) continue;
			if(pic[i][j]==1){
				dfs(i,j);
				maxwid = Max(maxwid,wid);
				wid=0;
				cnt++;
			}
		}
	}
	printf("%d\n%d",cnt,maxwid);
}