#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n,k,dp[1002][1002];
	scanf("%d %d",&n,&k);
	dp[1][0]=1;
	dp[1][1]=1;
	dp[2][0]=1;
	dp[2][1]=2;
	dp[2][2]=1;
	for(int i=3;i<=n;i++){
		dp[i][0]=1;
		dp[i][i]=1;
		for(int j=1;j<=i;j++){
			dp[i][j]=dp[i-1][j-1]%10007+dp[i-1][j]%10007;
		}
	}
	printf("%d",dp[n][k]%10007);
}