#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

vector<int> edge[100001];
int indegree[100001];
queue<int> q;
vector<int> ans;
int n;
int vis[100001];

void dfs(int cur){
    if(vis[cur]) return;
    vis[cur] = 1;
    for(auto e: edge[cur]){
        ans.push_back(e);        
        dfs(e);
    }
}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        edge[i].push_back(a);
        indegree[a]++;
    }
    q.push(1);
    for(int i=1;i<=n;i++){
        if(indegree[i]==0) q.push(i);
    }
    dfs(1);
    while(!q.empty()){
        if(!vis[q.front()]){
            ans.push_back(q.front());
            dfs(q.front());
        }
        q.pop();
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    cout<<ans.size()<<'\n';
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
}