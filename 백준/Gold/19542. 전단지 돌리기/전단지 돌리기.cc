#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n,s,d;
map<int, vector<int>> graph;
int vis[100001];
int ans;

int dfs(int cur){
    if(graph[cur].size()==0) return 1;
    int curdep = 0;
    for(auto e: graph[cur]){
        if(vis[e]==1) continue;
        vis[e] = 1;
        int dep = dfs(e);
        curdep = max(curdep, dep);
    }
    if(curdep >= d && cur!=s){
        ans++;
    }
    return curdep + 1;
}

int main(){
    cin>>n>>s>>d;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vis[s] = 1;
    dfs(s);
    cout<<ans*2;
}