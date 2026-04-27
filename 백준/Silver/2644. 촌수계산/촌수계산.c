#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

int visited[101],mat[101][101];
int n,m,length,a,b;

void dfs(int x, int len){
	if(visited[x]) return;
	visited[x]=1;
	if(x==b){
		length=len;
		return;
	}
	for(int i=1;i<=n;i++){
		if(mat[x][i]){
			dfs(i,len+1);
		}
	}
}

int main(){
	scanf("%d %d %d %d",&n,&a,&b,&m);
	
	for(int i=0;i<m;i++){
		int a1,a2;
		scanf("%d %d",&a1,&a2);
		mat[a1][a2]=1;
		mat[a2][a1]=1;
	}
	length=-1;
	dfs(a,0);
	printf("%d",length);
}