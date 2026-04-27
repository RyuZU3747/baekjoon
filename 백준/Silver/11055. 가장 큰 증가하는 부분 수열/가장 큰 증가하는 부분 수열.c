#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n, arr[1000],dp[1000],max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		dp[i]=arr[i];
	}
	for(int i/*맨끝*/=0;i<n;i++){
		for(int j/*작은애들 찾기*/=0;j<i;j++){
			if(arr[i]>arr[j]&&dp[i]/*i까지 합이*/<dp[j]+arr[i]/*얘보다 작으면 갱신*/) dp[i]=dp[j]+arr[i];
		}
		if(max<dp[i]/*이게 최대합일 경우*/) max=dp[i];
	}
	printf("%d",max);
}