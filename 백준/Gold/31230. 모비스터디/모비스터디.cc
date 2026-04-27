#include <bits/stdc++.h>
#define ll long long int 
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
using namespace std;

vector<pair<int,int>> graph[200001];

ll distA[200001];
ll distB[200001];

int main(){
    FASTIO;
    int n,m,A,B;cin>>n>>m>>A>>B;
    for(ll i=0;i<m;i++){
        ll a,b,c;cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    for(ll i=1;i<=n;i++) distA[i]=1234567890123456789;
    for(ll i=1;i<=n;i++) distB[i]=1234567890123456789;
    distA[A] = 0;
    distB[B] = 0;
    priority_queue<pair<ll, int>> pq;
    pq.push({0,A});
    while(!pq.empty()){
        auto [cos, cur] = pq.top();
        cos = -cos;
        pq.pop();
        if(distA[cur] < cos) continue;
        for(auto &[nxt, w] : graph[cur]){
            if(distA[nxt] > cos+w){
                distA[nxt] = cos+w;
                pq.push({-(cos+w),nxt});
            }
        }
    }
    pq = priority_queue<pair<ll,int>>();    
    pq.push({0,B});
    while(!pq.empty()){
        auto [cos, cur] = pq.top();
        cos = -cos;
        pq.pop();
        if(distB[cur] < cos) continue;
        for(auto &[nxt, w] : graph[cur]){
            if(distB[nxt] > cos+w){
                distB[nxt] = cos+w;
                pq.push({-(cos+w),nxt});
            }
        }
    }

    vector<int> ans;
    ll mn = distA[B];
    for(int i=1;i<=n;i++){
        if(distA[i] + distB[i]==mn) ans.push_back(i);
    }
    cout<<ans.size()<<'\n';
    for(auto e: ans) cout<<e<<' ';

}