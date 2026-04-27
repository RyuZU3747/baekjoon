#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int com[31][31];
int main(){
	int t, n, m;
	scanf("%d",&t);
	com[2][1]=2;
	for(int i=1;i<31;i++){
			com[i][i]=1;
			com[i][0]=1;
	}
	for(int i=3;i<31;i++){
		for(int j=1;j<i;j++){
			com[i][j]=com[i-1][j]+com[i-1][j-1];
		}
	}
	for(int i=0;i<t;i++){
		scanf("%d %d",&n,&m);
		printf("%d\n",com[m][n]);
	}
}