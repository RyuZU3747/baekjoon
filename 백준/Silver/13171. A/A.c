#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	long long int a,x,ans=1;
	long long int arr[1000];
	scanf("%lld %lld",&a,&x);
	a%=1000000007;
	arr[1]=a;
	for(int i=2;i<=64;i++){
		arr[i]=((arr[i-1]%1000000007)*(arr[i-1]%1000000007))%1000000007;
	}
	
	int i=1;
	while(1){
		if((x&1)==1){
			ans = ((ans%1000000007)*(arr[i]%1000000007))%1000000007;
		}
		x=x>>1;
		i++;
		if(x<1) break;
	}
	printf("%lld",ans);
}