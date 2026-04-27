#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long
#define div 1000000007

int main(){
	ll int n,k,s,ans=1;
	scanf("%lld %lld",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&s);
		k -= s;
	}
	
	for(int i=k+1;i<=k+n;i++){
		ans = (ans*i)%div;
	}
	printf("%lld",ans);
}