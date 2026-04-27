#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

ll k[100001],c[100001],ans;
int n;

ll multi(ll k){
	if(k<30) return 1<<k;
    if(k==1) return 2;
    if(k%2==1) return ((2*multi(k/2))%MOD*multi(k/2))%MOD;
    else return (multi(k/2)*multi(k/2))%MOD;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%lld %lld",&c[i],&k[i]);
    }
    for(int i=0;i<n;i++){
        ans += ((c[i]*k[i])%MOD*multi(k[i]-1))%MOD;
        ans %= MOD;
    }
    printf("%lld",ans);
}