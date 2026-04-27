#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	ll n,ans,sum=1,b=1;
	scanf("%lld",&n);
	if(n==1){
		printf("1");
		return 0;
	}
	for(ll i=1;sum<=n;i++){
		b+=i*6;
		if(n==b){
			ans=i;
			break;
		}
		if(sum<=n&&n<=b) ans=i;
		sum+=6*i;
	}
	printf("%lld",ans+1);
}