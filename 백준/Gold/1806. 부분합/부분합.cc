#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	ll n,s,arr[100001],front=0,rear=0,sum=0;
	scanf("%lld %lld",&n,&s);
	ll mn = 123456789;
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
	}
	sum=arr[0];
	while(front!=n&&rear!=n){
		if(sum>=s){
			mn = Min(mn,rear-front+1);
		}
		if(sum<s){
			rear++;
			sum+=arr[rear];
		}
		else if(sum>=s){
			sum-=arr[front];
			front++;
		}
	}
	if(mn==123456789) printf("0");
	else printf("%lld",mn);
}