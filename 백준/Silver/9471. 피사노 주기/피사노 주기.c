#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	long long int m,p,c;
		int fibo[1000001],k[1000001];
	long long int su;
	fibo[1]=1;
	fibo[2]=1;
	k[1]=1;
	k[2]=1;
	scanf("%lld",&p);
	for(int j=1;j<=p;j++){
		su=2;
		scanf("%lld %lld",&c,&m);
		for(int i=3;;i++){
			fibo[i]=fibo[i-1]%m+fibo[i-2]%m;
			k[i]=fibo[i]%m;
			su++;
			if(k[i]==0&&k[i-1]==1){
				printf("%lld %lld\n",c,su);
				break;
			}
		}
	}
	
}