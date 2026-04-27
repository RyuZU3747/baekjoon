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

int root[1010];
int mxedge[1010][1010];
vector<pii> graph[1010];
vector<array<int,3>> edges;

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy) root[fx]=root[fy];
    else root[fy]=root[fx];
    return;
}

int main(){
    FASTIO;
    for(int i=0;i<1010;i++){
        root[i]=i;
    }
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,c;cin>>a>>b>>c;
        edges.push_back({c,a,b});
    }
    sort(edges.begin(), edges.end());
    ll cost = 0;
    for(auto [w,a,b] : edges){
        if(find(a) != find(b)){
            Union(a,b);
            cost += w;
            graph[a].push_back({b,w});
            graph[b].push_back({a,w});
        }
    }

    for(int i=1;i<=n;i++){
        int vis[1010];
        memset(vis, 0, sizeof vis);
        queue<pii> q;
        q.push({i,0});
        vis[i] = 1;
        while(!q.empty()){
            auto [cur, cw] = q.front();
            q.pop();
            for(auto [nxt,nw]: graph[cur]){
                if(vis[nxt]) continue;
                vis[nxt] = 1;
                mxedge[i][nxt] = max(cw, nw);
                mxedge[nxt][i] = max(cw, nw);
                q.push({nxt, mxedge[i][nxt]});
            }
        }
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int a,b;cin>>a>>b;
        cout<<cost-mxedge[a][b]<<'\n';
    }
}