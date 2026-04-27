#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

int main(){
	ll n,tmp=0;
	scanf("%lld",&n);
	for(;(1LL<<tmp)<=n;tmp++);
	tmp=1LL<<tmp;
	if(n==tmp-1){
		printf("1\n%lld",n);
	}
	else{
		printf("2\n%lld %lld",n^(tmp-1),n);
	}
}