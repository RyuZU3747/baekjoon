#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll fastpow(ll a, ll x, ll m){
    ll ret = 1;
    while(x){
        if(x%2){
            ret = ret*a%m;
        }
        a =  a * a%m;
        x /= 2;
    }
    return ret;
}

int main(){
    FASTIO;
    int n,k;cin>>n>>k;
    ll cnt = 0;
    int su[100001];
    memset(su, 0, sizeof su);
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        su[a%k]++;
    }
    ll ans = 1;
    for(int i=0;2*i<=k;i++){
        if(i==0||2*i==k){
            ans *= su[i]+1;
            ans %= MOD;
        }
        else{
            ans *= fastpow(2, su[i], MOD) + fastpow(2, su[k-i], MOD) - 1;
            ans %= MOD;
        }
    }
    cout<<(ans-n-1 + MOD) %MOD;
}