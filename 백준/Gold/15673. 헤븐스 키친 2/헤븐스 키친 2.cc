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
    vector<ll> arr(n);
    vector<ll> pdp(n+1);
    vector<ll> mdp(n+1);
    vector<ll> lpdp(n+1);
    vector<ll> lmdp(n+1);
    vector<ll> rpdp(n+1);
    vector<ll> rmdp(n+1);
    for(auto &x:arr) cin>>x;

    lpdp[1] = arr[0];
    lmdp[1] = arr[0];
    pdp[1] = arr[0];
    mdp[1] = arr[0];

    for(int i=2;i<=n;i++){
        if(pdp[i-1] <= 0) pdp[i] = arr[i-1];
        else pdp[i] = pdp[i-1] + arr[i-1];
        if(mdp[i-1] <= 0) mdp[i] = mdp[i-1] + arr[i-1];
        else mdp[i] = arr[i-1];
        lpdp[i] = max(lpdp[i-1], pdp[i]);
        lmdp[i] = min(lmdp[i-1], mdp[i]);
    }

    pdp = vector<ll>(n+1);
    mdp = vector<ll>(n+1);

    rpdp[n] = arr[n-1];
    rmdp[n] = arr[n-1];
    pdp[n] = arr[n-1];
    mdp[n] = arr[n-1];

    for(int i=n-1;i>0;i--){
        if(pdp[i+1] <= 0) pdp[i] = arr[i-1];
        else pdp[i] = pdp[i+1] + arr[i-1];
        if(mdp[i+1] <= 0) mdp[i] = mdp[i+1] + arr[i-1];
        else mdp[i] = arr[i-1];
        rpdp[i] = max(rpdp[i+1], pdp[i]);
        rmdp[i] = min(rmdp[i+1], mdp[i]);
    }
    ll ans = -1234567890123456789;
    for(int i=1;i<n;i++){
        // cout<<lpdp[i]<<' '<<lmdp[i]<<' '<<rpdp[i]<<' '<<rmdp[i]<<'\n';

        ans = max(ans, lpdp[i]*rpdp[i+1]);
        ans = max(ans, lmdp[i]*rmdp[i+1]);
        ans = max(ans, lpdp[i]*rmdp[i+1]);
        ans = max(ans, lmdp[i]*rpdp[i+1]);
    }
    cout<<ans;
}