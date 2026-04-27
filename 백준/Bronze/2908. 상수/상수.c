#include <stdio.h>

int main(){
	int a, b, t1,t2,t3;
	scanf("%d %d",&a,&b);
	t1=a/100;
	t2=(a%100)/10;
	t3=a%10;
	a=t3*100+t2*10+t1;
	t1=b/100;
	t2=(b%100)/10;
	t3=b%10;
	b=t3*100+t2*10+t1;
	if(a>b) printf("%d",a);
	else printf("%d",b);
}