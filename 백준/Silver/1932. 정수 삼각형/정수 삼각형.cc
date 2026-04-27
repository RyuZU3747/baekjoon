#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int n, pira[501][501],ans[501][501];
int dp(int x, int y,int sum){
	if(y==n) return sum+pira[x][y];
	if(ans[x][y]>0) return ans[x][y];
	sum+pira[x][y];
	return ans[x][y]=Max(dp(x+1,y+1,sum),dp(x,y+1,sum))+pira[x][y];
}
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			scanf("%d",&pira[j][i]);
		}
	}
	printf("%d",dp(1,1,0));
}