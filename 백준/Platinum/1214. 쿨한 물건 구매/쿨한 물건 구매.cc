#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll d,p,q;cin>>d>>p>>q;
    if(d%p==0 || d%q==0){
        cout<<d;
        return 0;
    }
    if(d<p&&d<q){
        cout<<min(p,q);
        return 0;
    }
    if(p<q) swap(p,q);
    ll t = d/p+1;
    ll ans = p*t;
    for(ll i=t-1;i>=0;i--){
        ll j = (d-p*i)/q;
        if((d-p*i)%q!=0) j++;
        if(ans==p*i+q*j) break;
        ans = min(ans, p*i+q*j);
    }
    cout<<ans;
}