#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int main(){
	int t;
	ll int n;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%lld",&n);
        if(n%3==2||n%9==0) printf("TAK\n");
        else printf("NIE\n");
	}
}