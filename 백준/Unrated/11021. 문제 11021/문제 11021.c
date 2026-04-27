#include <stdio.h>

int main(){
	int a,i,b,c;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		scanf("%d %d",&b,&c);
		printf("Case #%d: %d\n",i,b+c);
	}
	return 0;
}
