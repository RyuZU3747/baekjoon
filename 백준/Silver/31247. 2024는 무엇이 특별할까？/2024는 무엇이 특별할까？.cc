#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
using namespace std;

ll fastpow(ll a, ll x){
    ll ret = 1;
    while(x){
        if(x%2) ret = ret * a;
        a = a*a;
        x/=2;
    }
    return ret;
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        ll n,k;cin>>n>>k;
        if(k==0){
            cout<<(n+1)/2<<'\n';
        }
        else if(k>=62) cout<<0<<'\n';
        else{
            ll ans = 0;
            ll t = fastpow(2,k);
            if(n < t) cout<<0<<'\n';
            else{
                ans = (n/t+1)/2;
                cout<<ans<<'\n';
            }
        }
    }
}