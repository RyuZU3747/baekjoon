#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int col[32], diag1[32], diag2[32], cnt=0, n;

void backtrac(int y){
	if(y==n){
		cnt++;
		return;
	}
	for(int x=0;x<n;x++){
		if(col[x]==1||diag1[x+y]==1||diag2[x-y+n-1]==1)continue;
		col[x]=1;
		diag1[x+y]=1;
		diag2[x-y+n-1]=1;
		backtrac(y+1);
		col[x]=0;
		diag1[x+y]=0;
		diag2[x-y+n-1]=0;
	}
}

int main(){
	scanf("%d",&n);
	backtrac(0);
	printf("%d",cnt);
}