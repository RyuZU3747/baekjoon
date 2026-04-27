#include <stdio.h>

int main(){
	int ar[4][2];
	for(int j=0;j<3;j++)
	for(int i=0;i<2;i++)
	scanf("%d",&ar[j][i]);
	for(int i=0;i<2;i++){
		if(ar[0][i]==ar[2][i]) ar[3][i]=ar[1][i];
		else if(ar[0][i]==ar[1][i]) ar[3][i]=ar[2][i];
		else ar[3][i]=ar[0][i];
	}
	printf("%d %d",ar[3][0],ar[3][1]);
}