#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int dp[1025][1025], map[1025][1025];

int main(){
	int n,m,x1,x2,y1,y2;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) scanf("%d",&map[i][j]);
	}
	dp[1][1]=map[1][1];
	for(int i=2;i<=n;i++){
		dp[1][i]=dp[1][i-1]+map[1][i];
		dp[i][1]=dp[i-1][1]+map[i][1];
	}
	for(int i=2;i<=n;i++){
		for(int j=2;j<=n;j++){
			dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+map[i][j];
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d %d %d %d",&y1,&x1,&y2,&x2);
		printf("%d\n",dp[y2][x2]-dp[y2][x1-1]-dp[y1-1][x2]+dp[y1-1][x1-1]);
	}
}