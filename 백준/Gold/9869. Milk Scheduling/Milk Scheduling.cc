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
    vector<pii> ar;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        ar.push_back({b,a});
    }
    sort(ar.begin(),ar.end(),[](pii a, pii b){
        if(a.first==b.first) return a.second > b.second;
        return a.second > b.second;
    });
    ll ans = 0;
    map<int, int> vis;
    for(auto x: ar){
        int t = x.first;
        while(t){
            if(vis[t]==0){
                vis[t] = 1;
                ans += x.second;
                break;
            }
            t--;
        }
    }
    cout<<ans;
}