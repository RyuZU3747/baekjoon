#include <stdio.h>

int main() {
	int n;
    long long a=1, b=0, c;
	scanf("%d", &n);
	if(n<=1) printf("%d",n);
	else{
    for(int i=1;i<=n;i++){
		c=a;
		a=c+b;
		b=c;
	}
	printf("%d",c);
}
}