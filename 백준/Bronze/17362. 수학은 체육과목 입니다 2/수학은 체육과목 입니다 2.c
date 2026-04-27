#include <stdio.h>
int main(){
	int a,s;
	scanf("%d",&a);
	s=a%8;
	if(s==0) printf("2");
	else if(s<=5) printf("%d",s);
	else if(s==6) printf("4");
	else printf("3");
	
}