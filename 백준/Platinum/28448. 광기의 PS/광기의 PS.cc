#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll n,l;
    cin>>n>>l;
    ll ans = 0;
    vector<pii> pro;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        if(b<=5) ans += b;
        else pro.push_back({a,b});
    }
    if(pro.size()>0){
        sort(pro.begin(),pro.end(),[](pii a, pii b){return a.first > b.first;});
        ll crazy = 0;
        for(ll i=0;i<pro.size()-1;i++){
            ans += pro[i].second;
            crazy += pro[i].first * (pro[i].second - 5);
            ll nxt = pro[i+1].first * pro[i+1].second;
            if(l - crazy < nxt){
                ans += nxt - (l-crazy);
                crazy -= nxt - (l-crazy);
            }
        }
        ans += pro[pro.size()-1].second;
    }
    cout<<ans;
}