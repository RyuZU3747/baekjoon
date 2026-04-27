#include <stdio.h>
int main(){
	int a,c;
	scanf("%d",&a);
	c=a/5;
	if(a%5!=0) c++;
	printf("%d",c);
}