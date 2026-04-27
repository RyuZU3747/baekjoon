#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	long long int n, dp[81],fib[81];
	scanf("%lld",&n);
	dp[1]=4;
	dp[2]=6;
	fib[1]=1;
	fib[2]=1;
	for(int i=3;i<=n;i++){
		fib[i]=fib[i-1]+fib[i-2];
		dp[i]=dp[i-1]-fib[i]+fib[i]*3;
	}
	printf("%lld",dp[n]);
}