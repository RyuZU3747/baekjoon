#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n,m;cin>>n>>m;
    ll t;cin>>t;
    vector<pii> cats;
    for(ll i=0;i<t;i++){
        ll a,b;cin>>a>>b;
        if(a<=n&&b<=m) cats.push_back({a,b});
    }
    sort(cats.begin(),cats.end());
    ll lis[100001];
    ll back = 1;
    memset(lis, -1, sizeof lis);
    lis[0] = cats[0].second;
    for(ll i=1;i<cats.size();i++){
        if(lis[back-1] <= cats[i].second) lis[back++] = cats[i].second;
        else lis[upper_bound(lis, lis+back, cats[i].second) - lis] = cats[i].second;
    }
    cout<<back;
}