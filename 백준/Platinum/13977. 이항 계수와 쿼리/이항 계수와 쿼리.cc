#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll fac[4000001];

ll multi(ll i,ll k){
    if(k==1) return i;
    if(k%2==1) return ((i*multi(i,k/2))%MOD*multi(i,k/2))%MOD;
    else return (multi(i,k/2)*multi(i,k/2))%MOD;
}

int main(){
    FASTIO;
    ll n,k,a,b,c,ans;
    fac[0]=1;
    for(int i=1;i<4000001;i++){
        fac[i]=(fac[i-1]*i)%MOD;
    }
    int m;cin>>m;
    while(m--){
        cin>>n>>k;
        a = fac[n]%MOD;
        b = fac[k]%MOD;
        c = fac[n-k]%MOD;
        ans = ((a * multi(b,MOD-2))%MOD * multi(c,MOD-2))%MOD;
        cout<<ans<<'\n';
    }
}