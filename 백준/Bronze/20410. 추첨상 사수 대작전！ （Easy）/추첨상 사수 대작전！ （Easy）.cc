#include <stdio.h>

int main() {
	int m,seed,x1,x2;
	scanf("%d %d %d %d",&m,&seed,&x1,&x2);
	for(int i=0;i<=m;i++){
		for(int j=0;j<=m;j++){
			if((i*seed+j)%m==x1){
				if((i*x1+j)%m==x2){
					printf("%d %d",i,j);
					return 0;
				}
			}
		}
	}
}