#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int main(){
	ll int n,m;
	scanf("%lld %lld",&n,&m);
	if(n==1) printf("1");
	else if(n==2) printf("%lld",Min(4,(m-1)/2+1));
	else{
		if(m<7) printf("%lld",Min(4,m));
		else printf("%lld",m-2);
	}
}