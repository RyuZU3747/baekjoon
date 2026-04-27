#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	long long int n,p,q,fibo[10001];
	scanf("%lld",&n);
	fibo[1]=1;
	fibo[2]=1;
		
	for(int i=0;i<n;i++){
		scanf("%lld %lld",&p,&q);
		for(int j=3;j<=p;j++){
			fibo[j]=fibo[j-1]%q+fibo[j-2]%q;
		}
		printf("Case #%d: %lld\n",i+1,fibo[p]%q);
	}
}