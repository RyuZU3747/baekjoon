#include <stdio.h>

int main() {
	int n;
	long long int has=0, su=1;
	char a;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %c",&a);
		has += ((a-96)*su)%1234567891;
		su *= 31;
		su = su%1234567891;
	}
	printf("%lld",has%1234567891);
}