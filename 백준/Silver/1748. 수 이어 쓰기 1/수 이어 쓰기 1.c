#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	long long int n,ans;
	scanf("%lld",&n);
	if(n<10){
		ans=n;
	}
	
	else if(n<100){
		ans=9;
		for(int i=10;i<=n;i++){
			ans+=2;
		}
	}
	
	else if(n<1000){
		ans=189;
		for(int i=100;i<=n;i++){
			ans+=3;
		}
	}
	
	else if(n<10000){
		ans=2889;
		for(int i=1000;i<=n;i++){
			ans+=4;
		}
	}
	
	else if(n<100000){
		ans=38889;
		for(int i=10000;i<=n;i++){
			ans+=5;
		}
	}
	
	else if(n<1000000){
		ans=488889;
		for(int i=100000;i<=n;i++){
			ans+=6;
		}
	}
	
	else if(n<10000000){
		ans=5888889;
		for(int i=1000000;i<=n;i++){
			ans+=7;
		}
	}
	
	else if(n<100000000){
		ans=68888889;
		for(int i=10000000;i<=n;i++){
			ans+=8;
		}
	}
	else ans = 788888889 + 9;
	printf("%lld",ans);
}