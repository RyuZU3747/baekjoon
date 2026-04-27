#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n;cin>>n;
    vector<pii> arr(n);
    for(auto &x:arr) cin>>x.first;
    for(auto &x:arr) cin>>x.second;
    sort(arr.begin(), arr.end());
    map<ll, ll> cnt;
    if(arr[0].first!=arr[0].second){
        cout<<0;
        return 0;
    }
    ll ans = 1;
    int idx = 0;
    for(int i=1;i<n;i++){
        if(arr[idx].first != arr[i].first){
            while(idx<i) cnt[arr[idx++].second]++;
        }
        ans *= cnt[arr[i].second - arr[i].first];
        ans %= MOD;
    }
    cout<<ans;
}