#include <stdio.h>

int main() {
	int a,b,i,max,n,m;
	scanf("%d",&m);
	for(int j=0;j<m;j++){
	scanf("%d %d",&a,&b);
	if(a<b) n=a;
	else n=b;
	for(i=1;i<=n;i++){
		if(a%i==0&&b%i==0) max=i;
	}
	printf("%d\n",a*b/max);
	}
}
