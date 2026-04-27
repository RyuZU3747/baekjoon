#include <stdio.h>

int main(){
	int t,k,n,ap[15][15]={0};
	for(int i=0;i<15;i++){
		ap[0][i]=i+1;
		if(i>0)ap[i][0]=ap[i-1][0];
	}
	for(int i=1;i<15;i++){
		for(int j=1;j<15;j++){
			ap[i][j]=ap[i-1][j]+ap[i][j-1];
		}
	}
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&k,&n);
		printf("%d\n",ap[k][n-1]);
	}
}