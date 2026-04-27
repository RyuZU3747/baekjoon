#include <stdio.h>
int main(){
	long long int a, b, sum=0;
	scanf("%lld %lld",&a,&b);
	if(a>b){
		sum=(a-b+1)*(a+b)/2;
	}
	else{
		sum=(b-a+1)*(a+b)/2;
	}
	printf("%lld",sum);
}
