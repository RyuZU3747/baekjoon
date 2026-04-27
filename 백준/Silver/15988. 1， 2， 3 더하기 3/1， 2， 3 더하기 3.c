#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
long long int dp[1000001];
int main(){
	int t, n;
	scanf("%d",&t);
	dp[1]=1;
	dp[2]=2;
	dp[3]=4;
	for(int i=4;i<1000001;i++){
		dp[i]=(dp[i-1]%1000000009+dp[i-2]%1000000009+dp[i-3]%1000000009)%1000000009;
	}
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		printf("%lld\n",dp[n]);
	}
}