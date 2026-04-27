#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int ansarr[100001]={0};
	int n, a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		ansarr[a+1001]++;
	}
	for(int i=0;i<100001;i++){
		if(ansarr[i]>0) printf("%d ",i-1001);
	}
}