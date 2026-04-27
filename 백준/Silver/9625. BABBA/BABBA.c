#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int k,dp[2][46];
	scanf("%d",&k);
	dp[0][0]=1;
	dp[1][0]=0;
	dp[1][1]=1;
	dp[0][1]=0;
	dp[0][2]=1;
	dp[1][2]=1;
	for(int i=3;i<=k;i++){
		dp[0][i]=dp[1][i-1];
		dp[1][i]=dp[1][i-1]+dp[0][i-1];
	}
	printf("%d %d",dp[0][k],dp[1][k]);
}