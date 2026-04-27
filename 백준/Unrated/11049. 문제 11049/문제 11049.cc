#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int dp[501][501];

int main(){
	int n;
	int mat[501][2];
	scanf("%d",&n);
	if(n==1){
		printf("1");
		return 0;
	}
	for(int i=1;i<=n;i++){
		int r,c;
		scanf("%d %d",&r,&c);
		mat[i][0]=r;
		mat[i][1]=c;
	}
	for(int i=1;i<n;i++){ //길이
		for(int j=1;i+j<=n;j++){ //시작
			dp[j][i+j] = 2147483647;
			for(int k=j;k<=i+j;k++){ //중간
				dp[j][i+j]=Min(dp[j][i+j],dp[j][k]+dp[k+1][i+j]+mat[j][0]*mat[k][1]*mat[i+j][1]);
			}
		}
	}
	printf("%d",dp[1][n]);
}