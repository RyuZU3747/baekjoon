#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n,r[1001],g[1001],b[1001],dp[1001][3];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d %d %d",&r[i],&g[i],&b[i]);
	}
	dp[1][0]=r[1];
	dp[1][1]=g[1];
	dp[1][2]=b[1];
	for(int i=2;i<=n;i++){
		dp[i][0]=Min(dp[i-1][1],dp[i-1][2])+r[i];
		dp[i][1]=Min(dp[i-1][0],dp[i-1][2])+g[i];
		dp[i][2]=Min(dp[i-1][1],dp[i-1][0])+b[i];
	}
	printf("%d",Min(dp[n][0],Min(dp[n][1],dp[n][2])));
}