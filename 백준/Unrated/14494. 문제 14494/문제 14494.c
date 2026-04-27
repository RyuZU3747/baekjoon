#include <stdio.h>
long long int ar[1002][1002];
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	ar[0][0] = 1;
	for(int i=1;i<=n;i++){
		ar[i][0] = 1;
	}
	for(int i=1;i<=m;i++){
		ar[0][i] = 1;
	}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i>0&&j>0) ar[i][j] = (ar[i-1][j]+ar[i][j-1]+ar[i-1][j-1])%1000000007;
		}
	}
	printf("%lld",ar[n-1][m-1]%1000000007);
}