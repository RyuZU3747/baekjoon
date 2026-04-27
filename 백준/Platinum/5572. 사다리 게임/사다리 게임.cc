#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int change[1001][1001];

int main(){
    ll n,m,h,k;cin>>n>>m>>h>>k;
    vector<ll> score;
    vector<pii> brid;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        score.push_back(a);
    }
    for(ll i=0;i<m;i++){
        ll a,b;cin>>a>>b;
        brid.push_back({a,b});
    }
    sort(brid.begin(),brid.end(),[](pii a, pii b){return a.second < b.second;});
    ll pole[1001];
    ll polescore[1001];
    ll sum = 0;
    ll ans = 0;
    for(ll i=1;i<=n;i++) pole[i] = i;
    for(auto e: brid){
        ll x = e.first;
        change[pole[x]][pole[x+1]] = 1;
        change[pole[x+1]][pole[x]] = 1;
        swap(pole[x],pole[x+1]);
    }
    for(ll i=1;i<=n;i++){
        polescore[pole[i]] = score[i-1];
    }
    for(ll i=1;i<=k;i++) sum += polescore[i];
    ans = sum;
    for(ll i=1;i<k+1;i++){
        for(ll j=k+1;j<=n;j++){
            if(change[i][j]==1) ans = min(ans, sum-polescore[i]+polescore[j]);
        }
    }
    cout<<ans;
}