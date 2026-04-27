#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n,m;
vector<pii> edge[50001];
int vis[50001];
int ans[100001];
int cnt = 0;

int dfs(int cur, int bef, int edgeidx){
    if(vis[cur]) return 0;
    vis[cur] = 1;
    int child = 0;
    for(auto e: edge[cur]){
        if(e.first==bef) continue;
        if(dfs(e.first, cur, e.second)==1) child++;
    }
    if(child%2==0){
        ans[edgeidx] = 1;
        cnt++;
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    FASTIO;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        edge[a].push_back({b,i+1});
        edge[b].push_back({a,i+1});
    }
    for(int i=1;i<n;i++){
        if(vis[i]) continue;
        if(dfs(i, 0, 0)==1){
            cout<<-1;
            return 0;
        }
    }
    cout<<cnt<<'\n';
    for(int i=1;i<=m;i++) if(ans[i]==1) cout<<i<<'\n';
}