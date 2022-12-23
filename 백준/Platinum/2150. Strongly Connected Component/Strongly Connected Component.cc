#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<int,vector<int>> edge;
map<int,vector<int>> redge;
int vis[200001];
stack<int> st;
vector<vector<int>> scc(200001);
int cnt;

void dfs(int cur){
    if(vis[cur]) return;
    vis[cur] = 1;
    for(auto e : edge[cur]){
        dfs(e);
    }
    st.push(cur);
}

void dfs2(int cur){
    if(vis[cur]) return;
    vis[cur] = 1;
    for(auto e: redge[cur]){
        dfs2(e);
    }
    scc[cnt].push_back(cur);
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        edge[a].push_back(b);
        redge[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==1) continue;
        dfs(i);
    }
    memset(vis, 0, sizeof vis);
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        if(vis[cur]==1) continue;
        dfs2(cur);
        cnt++;
    }
    for(int i=0;i<cnt;i++){
        sort(scc[i].begin(),scc[i].end());
    }
    sort(scc.begin(),scc.begin()+cnt);
    
    cout<<cnt<<'\n';
    for(int i=0;i<cnt;i++){
        for(auto x: scc[i]) cout<<x<<' ';
        cout<<"-1\n";
    }
}
