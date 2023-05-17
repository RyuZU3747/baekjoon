#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m,x;cin>>n>>m>>x;
    map<int,vector<pii>> graph;
    map<int,vector<pii>> rgraph;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        graph[a].push_back({b,c});
        rgraph[b].push_back({a,c});
    }
    priority_queue<pii> pq;
    ll dist[1001] = {0,};
    ll rdist[1001] = {0,};
    for(int i=0;i<1001;i++){
        dist[i] = 1234567890;
        rdist[i] = 1234567890;
    }
    pq.push({0,x});
    dist[x] = 0;
    while(!pq.empty()){
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for(auto e: graph[cur]){
            int nxt = e.first;
            int w = e.second;
            if(dist[nxt] > -dis+w){
                dist[nxt] = -dis+w;
                pq.push({dis-w,nxt});
            }
        }
    }
    pq.push({0,x});
    while(!pq.empty()){
        int dis = pq.top().first;
        int cur = pq.top().second;
        pq.pop();
        for(auto e: rgraph[cur]){
            int nxt = e.first;
            int w = e.second;
            if(rdist[nxt] > -dis+w){
                rdist[nxt] = -dis+w;
                pq.push({dis-w,nxt});
            }
        }
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        if(i==x) continue;
        ans = max(ans, dist[i]+rdist[i]);
    }
    cout<<ans;
}