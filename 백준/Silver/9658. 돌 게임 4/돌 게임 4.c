#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n;
	scanf("%d",&n);
	if(n%7==1||n%7==3) printf("CY");
	else printf("SK");
}