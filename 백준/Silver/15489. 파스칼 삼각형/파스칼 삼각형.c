#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n,k,w,dp[31][31],sum=0;
	scanf("%d %d %d",&n,&k,&w);
	dp[1][1]=1;
	dp[2][1]=1;
	dp[2][2]=1;
	for(int i=3;i<=n+w;i++){
		dp[i][1]=1;
		dp[i][i]=1;
		for(int j=2;j<i;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	for(int i=0;i<w;i++){
		for(int j=0;j<=i;j++){
			sum+=dp[n+i][k+j];
		}
	}
	printf("%d",sum);
}