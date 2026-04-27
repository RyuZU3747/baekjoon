#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
double arr[10001], dp[10001], max;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lf",&arr[i]);
	}
	dp[1]=arr[1];
	max=dp[1];
	for(int i=2;i<=n;i++){
		dp[i]=Max(dp[i-1]*arr[i],arr[i]);
		max=Max(dp[i],max);
	}
	printf("%.3lf",max);
}