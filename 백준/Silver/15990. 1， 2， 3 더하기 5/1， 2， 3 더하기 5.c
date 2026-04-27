#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
long long int dp[100001][4];
int main(){
	int t, n;
	long long int ans;
	scanf("%d",&t);
	dp[1][1]=1;
	dp[2][2]=1;
	dp[3][1]=1;
	dp[3][2]=1;
	dp[3][3]=1;
	for(int i=4;i<100001;i++){
		dp[i][1]=(dp[i-1][2]%1000000009+dp[i-1][3]%1000000009)%1000000009;
		dp[i][2]=(dp[i-2][1]%1000000009+dp[i-2][3]%1000000009)%1000000009;
		dp[i][3]=(dp[i-3][1]%1000000009+dp[i-3][2]%1000000009)%1000000009;
	}
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		ans=(dp[n][1]+dp[n][2]+dp[n][3])%1000000009;
		printf("%lld\n",ans);
	}
}