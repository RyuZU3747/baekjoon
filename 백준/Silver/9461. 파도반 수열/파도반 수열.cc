#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	long long int t,n,dp[101];
	scanf("%d",&t);
	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	dp[5]=2;
	for(int i=6;i<=100;i++){
		dp[i]=dp[i-1]+dp[i-5];
	}
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		printf("%lld\n",dp[n]);
	}
}