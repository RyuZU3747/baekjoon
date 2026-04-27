#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int queue[1001],mat[1001][1001],qs,qe;

int n,m,v;

bool visited[1001];

void dfs(int s){
	if(visited[s]) return;
	visited[s]=true;
	printf("%d ",s);
	for(int i=1;i<=n;i++){
		if(mat[s][i]) dfs(i);
	}
}

void bfs(int s){
	visited[s]=true;
	queue[qe]=s;
	qe++;
	while(qe!=qs){
		s = queue[qs];
		qs++;
		printf("%d ",s);
		for(int i=1;i<=n;i++){
			if(mat[s][i]){
				if(visited[i]) continue;
				visited[i]=true;
				queue[qe]=i;
				qe++;
			}
		}
	}
}

int main(){
	scanf("%d %d %d",&n,&m,&v);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		mat[a][b]=1;
		mat[b][a]=1;
	}
	dfs(v);
	printf("\n");
	for(int i=0;i<1001;i++) visited[i]=false;
	bfs(v);
}