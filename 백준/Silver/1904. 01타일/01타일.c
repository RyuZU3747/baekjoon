#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n,dp[1000001];
	scanf("%d",&n);
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	dp[4]=5;
	for(int i=5;i<=n;i++){
		dp[i]=dp[i-1]%15746+dp[i-2]%15746;
	}
	printf("%d",dp[n]%15746);
}