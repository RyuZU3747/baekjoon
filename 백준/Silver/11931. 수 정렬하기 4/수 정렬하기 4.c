#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int comp(const void* a, const void* b){
	int a1 = *(int*)a;
	int a2 = *(int*)b;
	return a2-a1;
}

int main(){
	int n,arr[1000001];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	qsort(arr,n,sizeof(int),comp);
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
}