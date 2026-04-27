#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define MOD 1000000000007;
int main(){
	long long int n,b,tmp=0;
	scanf("%lld %lld",&n,&b);
	for(int i=0;i<=b;i++){
		tmp+=pow(2,i);
	}
	if(n<=tmp) printf("yes");
	else printf("no");
}