#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    vector<pii> cow(n);
    for(auto &x: cow) cin>>x.first>>x.second;
    sort(cow.begin(), cow.end(),[](pii a, pii b){
        if(a.first < a.second){
            if(b.first < b.second) return a.first < b.first;
            return true;
        }
        else{
            if(b.first > b.second) return a.second > b.second;
            return false;
        }
    });
    //for(auto e:cow) cout<<e.first<<' '<<e.second<<'\n';
    int st[50001];
    int ed[50001];
    st[0] = cow[0].first;
    for(int i=1;i<n;i++) st[i] = st[i-1] + cow[i].first;
    ed[0] = max(st[0] + cow[0].second, cow[0].second);
    for(int i=1;i<n;i++) ed[i] = max(ed[i-1],st[i]) + cow[i].second;
    cout<<ed[n-1];
}