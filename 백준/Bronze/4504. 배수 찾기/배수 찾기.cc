#include <stdio.h>

int main(){
	int n,a;
	scanf("%d",&n);
	while(scanf("%d",&a)!=0){
		if(a==0) break;
		if(a%n==0) printf("%d is a multiple of %d.\n",a,n);
		else printf("%d is NOT a multiple of %d.\n",a,n);
	}
}