#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
int main(){
	int t,n,score[2][1000001],dp[2][1000001];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		dp[0][0]=0;
		dp[1][0]=0;
		scanf("%d",&n);
		for(int j=0;j<2;j++){
			for(int k=1;k<=n;k++){
				scanf("%d",&score[j][k]);
			}
		}
		dp[0][1]=score[0][1];
		dp[1][1]=score[1][1];
		for(int j=2;j<=n;j++){
			dp[0][j]=Max(dp[1][j-1]/*한칸뒤대각선*/,dp[1][j-2]/*두칸뒤대각선*/)+score[0][j];
			dp[1][j]=Max(dp[0][j-1]/*한칸뒤대각선*/,dp[0][j-2]/*두칸뒤대각선*/)+score[1][j];
		}
		printf("%d\n",Max(dp[0][n],dp[1][n]));
	}
}