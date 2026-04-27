#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define MOD 1000000000007;
int dp[50001];
int main(){
	int n;
	scanf("%d",&n);
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	dp[4]=1;
	for(int i=5;i<=n;i++){
		int min=10000;
		for(int j=1;j<(int)sqrt(i)+1;j++){
			min=Min(min,dp[i-j*j]);
		}
		dp[i]=min+1;
	}
	printf("%d",dp[n]);
}