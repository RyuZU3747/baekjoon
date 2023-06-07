#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


ll po(ll r){
    ll ret = 1;
    while(r--){
        ret *= 2;
        ret %= MOD;
    }
    return ret;
}

int main(){
	ll n;cin>>n;
    vector<ll> arr;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        ans += (arr[i] * (po(i) - po(n-i-1)));
        ans += MOD;
        ans %= MOD;
    }
    cout<<(ans+MOD)%MOD;
}