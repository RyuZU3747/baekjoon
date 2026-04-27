#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    while(1){
        ll n,m;cin>>n>>m;
        if(n==0&&m==0) break;
        if(n==0){
            cout<<-m*m<<'\n';
            continue;
        }
        if(m==0){
            cout<<n*n<<'\n';
            continue;
        }
        ll ans = -1234567890123456789;

        for(int sz=1;sz<=n && sz <= m;sz++){
            ll plu = (n-sz+1)*(n-sz+1) + sz - 1;
            ll minu = (m/(sz+1) + 1)*(m/(sz+1) + 1) * (m%(sz+1)) + (m/(sz+1))*(m/(sz+1)) * (sz+1-(m%(sz+1)));
            ans = max(ans, plu-minu);
        }
        cout<<ans<<'\n';
    }
}