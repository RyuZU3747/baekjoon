#include <stdio.h>

int main(){
	int t,r;
	char c[20];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&r);
		scanf("%s",&c);
		for(int j=0;c[j]!=0;j++){
			for(int k=0;k<r;k++){
				printf("%c",c[j]);
			}
		}
		printf("\n");
	}
}