#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long
int comp(const void *a, const void*b){
	int a1 = *(int*)a;
	int a2 = *(int*)b;
	if(a1>a2) return 1;
	else if(a1<a2) return -1;
	else return 0;
}

int n,m,visit[10],arr[10],ans[10],depth=0;

int recur(){
	if(depth==m){
		for(int j=0;j<m;j++){
			printf("%d ",ans[j]);
		}	
		printf("\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(visit[i]==0){
			visit[i]=1;
			ans[depth]=arr[i-1];
			depth++;
			recur();
			visit[i]=0;
			depth--;
		}
	}
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),comp);
	recur();
}