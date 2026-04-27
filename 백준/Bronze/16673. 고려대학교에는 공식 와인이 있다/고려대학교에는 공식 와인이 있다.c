#include <stdio.h>

int main(){
	int c,k,p,s=0;
	scanf("%d %d %d",&c,&k,&p);
	for(int i=1;i<=c;i++){
		s+=k*i+p*i*i;
	}
	printf("%d",s);
}