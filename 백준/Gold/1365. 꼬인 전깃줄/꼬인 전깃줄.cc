#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
    ll n, arr[100001],lis[100001],back=0;
	scanf("%lld",&n);
	for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
    if(n==1){
        printf("1");
        return 0;
    }
	lis[0]=-100001;
	for(int i=0;i<n;i++){
		if(lis[back-1]<arr[i]) lis[back++]=arr[i];
		else lis[lower_bound(lis,lis+back,arr[i])-lis] = arr[i];
	}
	printf("%lld",n-back);
}