#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	long long int dp[91][2],n;
	scanf("%lld",&n);
	dp[1][1]=1;
	dp[2][0]=1;
	dp[1][0]=0;
	dp[2][1]=0;
	for(int i=3;i<=n;i++){
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=dp[i-1][0];
	}
	printf("%lld",dp[n][0]+dp[n][1]);
}