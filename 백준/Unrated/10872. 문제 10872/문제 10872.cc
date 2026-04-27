#include <stdio.h>

int main(){
	int f=1, a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)f=f*i;
	printf("%d",f);
}