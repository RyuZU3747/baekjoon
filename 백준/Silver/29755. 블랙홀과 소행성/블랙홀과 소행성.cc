#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<ll> hole;
vector<ll> hang;

int main(){
    ll n,m;cin>>n>>m;
    for(ll i=0;i<n;i++){
        ll b;cin>>b;
        hole.push_back(b);
    }
    sort(hole.begin(), hole.end());
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        ll mndis = 1234567890;
        auto idx = upper_bound(hole.begin(), hole.end(), a);
        if(idx!=hole.end()) mndis = min(mndis, abs(a-*idx));
        if(idx!=hole.begin()) idx--;
        mndis = min(mndis, abs(a-*idx));
        hang.push_back(mndis * b);
    }
    ll left = 0, right = 1000000001;
    ll ans = 1234567890;
    while(left<=right){
        ll mid = (left+right) / 2;
        ll yes = 1;
        for(auto e: hang){
            if(e > mid) yes = 0;
        }
        if(yes){
            ans = min(ans, mid);
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout<<ans;
}