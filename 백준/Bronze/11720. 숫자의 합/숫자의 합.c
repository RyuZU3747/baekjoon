#include <stdio.h>

int main(){
	int n,sum=0;
	char c[100];
	scanf("%d",&n);
	scanf("%s",c);
	for(int i=0;i<n;i++) sum+=c[i]-48;
	printf("%d",sum);
}