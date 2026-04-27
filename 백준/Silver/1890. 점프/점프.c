#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
long long int n, board[100][100],dp[100][100];

int main(){
	scanf("%lld",&n);
	dp[0][0]=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%lld",&board[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=n-1&&i+board[i][j]<n) dp[i+board[i][j]][j]+=dp[i][j];
			if(j!=n-1&&j+board[i][j]<n) dp[i][j+board[i][j]]+=dp[i][j];
		}
	}
	printf("%lld",dp[n-1][n-1]);
}