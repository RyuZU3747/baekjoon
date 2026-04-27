#include <stdio.h>

int main(){
	int a,b,i,max,n;
	scanf("%d %d",&a,&b);
	if(a<b) n=a;
	else n=b;
	for(i=1;i<=n;i++){
		if(a%i==0&&b%i==0) max=i;
	}
	printf("%d\n%d",max,a*b/max);
}