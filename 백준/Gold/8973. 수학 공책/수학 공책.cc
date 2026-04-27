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

int n;
ll arr[2001];
ll brr[2001];
ll dp[2001][2001];
ll ans = -1234567890;
ll le, ri;

ll recur(ll l, ll r){
    if(l==r) return arr[l] * brr[r];
    if(l+1==r) return arr[l] * brr[r] + arr[r] * brr[l];
    ll & ret = dp[l][r];
    if(ret != -1234567890) return ret;
    ret = max(ret, recur(l+1,r-1) + arr[l] * brr[r] + arr[r] * brr[l]);
    return ret;
}

int main(){
    FASTIO;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<=n;i++) cin>>brr[i];
    
    for(int i=0;i<2001;i++) for(int j=0;j<2001;j++) dp[i][j] = -1234567890;

    for(int i=1;i<=n;i++){
        for(ll j=i;j<=n;j++){
            ll cur = recur(i,j);
            if(cur > ans){
                ans = cur;
                le = i-1;
                ri = n-j;
            }
        }
    }
    cout<<le<<' '<<ri<<'\n'<<ans;
}