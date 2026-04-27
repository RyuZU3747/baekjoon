#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pll> graph[3001];
ll dist[3001];

int main(){
    FASTIO;
    ll n,m,k;cin>>n>>m>>k;
    memset(dist, 0x3f, sizeof dist);
    for(int i=0;i<m;i++){
        ll a,b,c;cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    priority_queue<pll> pq;
    for(int i=0;i<k;i++){
        ll a;cin>>a;
        pq.push({0,a});
        dist[a] = 0;
    }
    while(!pq.empty()){
        auto [len, cur] = pq.top();
        pq.pop();
        len = -len;
        if(dist[cur] < len) continue;
        for(auto [nxt, w] : graph[cur]){
            if(dist[nxt] > w + len){
                dist[nxt] = w + len;
                pq.push({-dist[nxt], nxt});
            }
        }
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        for(auto [e,w]:graph[i]){
            ans = max(ans, dist[i]);
            ans = max(ans, dist[e]);
            ll len = ceil((dist[i] + dist[e] + w) / 2.0);
            ans = max(ans, len);
        }
    }
    cout<<ans;
}