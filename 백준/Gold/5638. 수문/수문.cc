#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<pll> moon(n);
    for(auto &x:moon) cin>>x.first>>x.second;
    int m;cin>>m;
    for(int _=1;_<=m;_++){
        cout<<"Case "<<_<<": ";
        ll v,t;cin>>v>>t;
        ll ans = 1234567890123456789;
        for(int i=1;i<(1<<(n+1));i++){
            ll cost = 0;
            ll g = 0;
            for(int m = 0;m<n;m++){
                if(i&(1<<m)){
                    cost += moon[m].second;
                    g += moon[m].first*t;
                }
            }
            if(g >= v){
                ans = min(ans, cost);
            }
        }
        if(ans == 1234567890123456789) cout<<"IMPOSSIBLE\n";
        else cout<<ans<<'\n';
    }
}