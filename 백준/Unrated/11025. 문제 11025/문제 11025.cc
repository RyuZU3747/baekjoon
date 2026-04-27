#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int josephu;

int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	josephu=0;
	for(int i=2;i<=n;i++){
	//	if(i<k){
			josephu=(josephu+k)%i;
	//	}
	}
	printf("%d",josephu+1);
}