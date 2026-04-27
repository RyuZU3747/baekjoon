#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n, arr[100001],dp[100001],max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	dp[0]=arr[0];
	max=arr[0];
	for(int i=1;i<n;i++){
		dp[i]=Max(arr[i],dp[i-1]+arr[i]);
		if(max<dp[i]) max=dp[i];
	}
	printf("%d",max);
}