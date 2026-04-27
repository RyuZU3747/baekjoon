#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        ll n,m;cin>>n>>m;
        if(n<m) swap(n,m);
        ll ans = m;
        ll cnt = 1;
        if(n==m) cnt = 3;
        else if(n<=m*2) cnt = 7;
        else{
            ans ++;
            if(n<=ans*2){
                if(m==1) cnt = min({2LL*(n - (ans*2)) + 7, 7LL});
                else cnt = 7;
            }
            else cnt = 2LL*(n - (ans*2)) + 7;
        }
        cout<<ans<<' '<<cnt<<'\n';
    }
}