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

int n,m,cnt;

bool visited[1001];

void dfs(int s){
	if(visited[s])return;
	visited[s]=true;
	for(int i=1;i<=n;i++){
		if(mat[s][i]){
			dfs(i);
		}
	}
}

int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		mat[a][b]=1;
		mat[b][a]=1;
	}
	for(int i=1;i<=n;i++) mat[i][i]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(visited[j]==false&&mat[i][j]==1){
				cnt++;
				dfs(j);
			}
		}
	}
	printf("%d\n",cnt);
}