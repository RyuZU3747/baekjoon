#include <stdio.h>

int main(){
	int a,i,j,k;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		for(j=1;j<a-i;j++){
			printf(" ");
		}
	for(k=0;k<=i;k++){
		printf("*");
	}
		printf("\n");
	}
	return 0;
}
