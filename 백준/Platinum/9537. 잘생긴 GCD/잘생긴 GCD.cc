#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main(){
    FASTIO;
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> a(n);
        map<ll, int> su;
        for(auto &x: a) cin>>x;
        ll ans = 0;
        for(ll j=0;j<n;j++){
            map<ll, int> tmap;
            tmap[a[j]] = j;
            ans = max(ans, a[j]);
            for(auto e: su){
                ll tmp = gcd(e.first,a[j]);
                ans = max(ans, tmp*(j+1-e.second));
                if(tmap.find(tmp) != tmap.end()){
                    tmap[tmp] = min(tmap[tmp],e.second);
                }
                else tmap[tmp] = e.second;
            }
            su = tmap;
            // cout<<j<<'\n';
            // for(auto e: su) cout<<e.first<<' '<<e.second<<'\n';
            // cout<<'\n';
        }
        cout<<ans<<'\n';
    }
}