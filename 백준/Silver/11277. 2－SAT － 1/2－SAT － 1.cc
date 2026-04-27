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
map<int,int> vis;
stack<int> st;
map<int,int> scc;
//vector<vector<int>> scc(200001);
int cnt;

void dfs(int cur){
    if(vis[cur]!=0) return;
    vis[cur] = 1;
    for(auto e : edge[cur]){
        dfs(e);
    }
    st.push(cur);
}

void dfs2(int cur){
    if(scc[cur]!=0) return;
    if(scc[-cur]==cnt){
        cout<<0;
        exit(0);
    }
    scc[cur] = cnt;
    for(auto e: redge[cur]){
        dfs2(e);
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        edge[-a].push_back(b);
        edge[-b].push_back(a);
        redge[a].push_back(-b);
        redge[b].push_back(-a);
    }
    for(int i=1;i<=n;i++){
        if(vis[i]==0) dfs(i);
        if(vis[-i]==0) dfs(-i);
    }
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        if(scc[cur]!=0) continue;
        cnt++;
        dfs2(cur);
    }

    for(int i=1;i<=n;i++){
        if(scc[i]==scc[-i]){
            cout<<0;
            return 0;
        }
    }
    cout<<1;
}
