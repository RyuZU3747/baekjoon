#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int dp[12];
int main(){
	int t, n;
	scanf("%d",&t);
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<12;i++){
		dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
	}
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		printf("%d\n",dp[n]);
	}
}