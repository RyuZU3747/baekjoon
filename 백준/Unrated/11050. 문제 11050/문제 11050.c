#include <stdio.h>

int main(){
	int n,k;
	int u=1,d=1;
	scanf("%d %d",&n,&k);
	for(int i=0;i<k;i++){
		u*=n-i;
		d*=i+1;
	}
	printf("%d",u/d);
}
	