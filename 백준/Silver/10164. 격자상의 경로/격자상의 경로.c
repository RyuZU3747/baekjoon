#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int dp[1001][1001];

int main(){
	int n,m,k,a,b;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=1000;i++){
		dp[1][i]=1;
		dp[i][1]=1;
	}
	int kn = k/m+1;
	if(k%m==0) kn=k/m;
	int km = (k-1)%m+1;
	if(k==0){
		for(int i=2;i<=n;i++){
			for(int j=2;j<=m;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		printf("%d",dp[n][m]);
	}
	else{
		for(int i=2;i<=kn;i++){
			for(int j=2;j<=km;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		a=dp[kn][km];
		for(int i=1;i<=1000;i++){
			dp[kn][i]=1;
			dp[i][km]=1;
		}
		for(int i=kn+1;i<=n;i++){
			for(int j=km+1;j<=m;j++){
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		printf("%d",a*dp[n][m]);
	}
}