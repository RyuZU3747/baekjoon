#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<int,int> graph;
map<int,int> vis;
set<int> ans;

void dfs(int cur){
    if(vis[cur]==1){
        int tmp = graph[cur];
        do{
            ans.insert(tmp);
            tmp = graph[tmp];
        }while(tmp!=cur);
        return;
    }
    vis[cur] = 1;
    dfs(graph[cur]);
}

int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        graph[i] = a;
    }
    for(int i=1;i<=n;i++){
        vis = map<int,int>();
        dfs(i);
    }
    cout<<ans.size()<<'\n';
    for(auto x: ans) cout<<x<<'\n';
}