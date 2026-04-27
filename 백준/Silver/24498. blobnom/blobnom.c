#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int main(){
	ll int n,max=-1;
	scanf("%lld",&n);
	ll int a[1000001];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	if(n==1) printf("%lld",a[0]);
	else if(n==2) printf("%lld",Max(a[0],a[1]));
	else{
		for(int i=0;i<n;i++){
			if(max<a[i]) max=a[i];
			if(i>0&&i<n-1){
				if(a[i-1]>a[i+1]){
					if(max<a[i]+a[i+1]) max=a[i]+a[i+1];
				}
				else{
					if(max<a[i]+a[i-1]) max=a[i]+a[i-1];
				}
			}
		}
		printf("%lld",max);
	}
}