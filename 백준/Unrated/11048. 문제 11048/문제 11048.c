#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int dp[1001][1001], map[1001][1001];

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf("%d",&map[i][j]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			dp[i][j]=Max(dp[i-1][j],dp[i][j-1])+map[i][j];
		}
	}
	printf("%d",dp[n-1][m-1]);
}