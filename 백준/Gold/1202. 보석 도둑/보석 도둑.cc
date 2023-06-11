#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>> arr;
    vector<ll> back;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    for(int i=0;i<k;i++){
        ll a;cin>>a;
        back.push_back(a);
    }
    sort(arr.begin(),arr.end(),[](pair<ll,ll> a, pair<ll,ll> b){return a.first < b.first;});
    sort(back.begin(),back.end(),[](ll a, ll b){return a < b;});
    ll j = 0, b = 0;
    ll ans = 0;
    priority_queue<int> pq;
    while(b<back.size()){
        while(j<arr.size()){
            if(arr[j].first <= back[b]) pq.push(arr[j++].second);
            else break;
        }
        b++;
        if(pq.size()>0){
            ans += pq.top();
            pq.pop();
        }
    }
    cout<<ans;
}