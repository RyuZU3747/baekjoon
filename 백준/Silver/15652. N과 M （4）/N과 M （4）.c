#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int n,m,visit[10],ans[10],depth=0;
int recur(int idx){
	if(depth==m){
		for(int j=0;j<m;j++){
			printf("%d ",visit[j]);
		}	
		printf("\n");
		return 0;
	}
	for(int i=idx;i<=n;i++){
			visit[depth]=i;
			depth++;
			recur(i);
			visit[depth]=0;
			depth--;
	}
}
int main(){
	scanf("%d %d",&n,&m);
	recur(1);
}