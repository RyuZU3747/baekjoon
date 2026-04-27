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
	if(a1>a2) return 1;
	else if(a2>a1) return -1;
	else return 0;
}

int main(){
	ll int n,m,arr[2000001];
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n+m;i++) scanf("%lld",&arr[i]);
	qsort(arr,n+m,sizeof(ll int),comp);
	for(int i=0;i<n+m;i++) printf("%lld ",arr[i]);
}