#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int main(){
	long long int comb1[101][101], comb2[101][101];
	int n,m;
	scanf("%d %d",&n,&m);
	comb1[2][1]=2;
	comb2[0][0]=0;
	for(int i=1;i<101;i++){
		for(int j=1;j<101;j++) comb2[i][j]=0;
		comb1[i][0]=1;
		comb1[i][i]=1;
	}
	for(int i=3;i<101;i++){
		for(int j=1;j<=i;j++){
			comb1[i][j]=comb1[i-1][j-1]+comb1[i-1][j];
			comb2[i][j]=comb2[i-1][j-1]+comb2[i-1][j];
			if(comb1[i][j]>=10000000000000000){
				comb2[i][j]++;
				comb1[i][j]-=10000000000000000;
			}
		}
	}
	if(comb2[n][m]!=0) printf("%lld%016lld",comb2[n][m],comb1[n][m]);
	else printf("%lld",comb1[n][m]);
}