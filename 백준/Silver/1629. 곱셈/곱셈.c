#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
long long int power(long long int a, long long int b, long long int c){
	if(b==0) return 1;
	if(b%2==0){
		return (power(a,b/2,c)*power(a,b/2,c))%c;
	}
	else{
		return a*power(a,b-1,c)%c;
	}
}
int main(){
	long long int a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	printf("%lld",power(a,b,c));
}