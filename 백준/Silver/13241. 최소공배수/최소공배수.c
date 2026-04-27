#include <stdio.h>

long long int gcd(long long int a, long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {

	long long int a,b,i,max,n;

	scanf("%lld %lld",&a,&b);

    i=gcd(a,b);
	printf("%lld",a*b/i);

	return 0;

}