#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n,k,dp[31][31];
	scanf("%d %d",&n,&k);
	dp[1][1]=1;
	dp[2][1]=1;
	dp[2][2]=1;
	for(int i=3;i<=n;i++){
		dp[i][1]=1;
		dp[i][i]=1;
		for(int j=2;j<i;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	printf("%d",dp[n][k]);
}