#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int vis[200001];
int dep[200001];
vector<int> graph[200001];

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    queue<pii> q;
    q.push({1,1});
    vis[1] = 1;
    dep[1] = 1;
    while(!q.empty()){
        auto [cur,d] = q.front();
        q.pop();
        for(auto nxt: graph[cur]){
            if(vis[nxt]==1) continue;
            vis[nxt] = 1;
            dep[d+1]++;
            q.push({nxt,d+1});
        }
    }
    ll ans = 1;
    for(int i=1;dep[i]!=0;i++){
        ans *= dep[i] + 1;
        ans %= MOD;
    }
    cout<<(ans-1 + MOD) % MOD;
}