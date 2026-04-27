#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int n, arr[1001],dp[1001],mx=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		dp[i]=1;
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[i]<arr[j]){
				dp[i]=Max(dp[i],dp[j]+1);
			}
			mx=Max(dp[i],mx);
		}
	}
	printf("%d",mx);
}