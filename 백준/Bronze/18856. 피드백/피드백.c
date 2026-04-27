#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",n);
	printf("1 2 ");
	for(int i=2;i<n-1;i++){
		printf("%d ",i+1);
	}
	printf("53");
}