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
int vis[100010];
int scccnt[100010];
int indegree[100010];
stack<int> st;
vector<vector<int>> scc(100010);
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
	scccnt[cur] = cnt;
    scc[cnt].push_back(cur);
    for(auto e: redge[cur]){
        dfs2(e);
    }
}

int main(){
	FASTIO;
	int t;cin>>t;
	while(t--){
		edge.clear();
		redge.clear();
		memset(indegree, 0, sizeof indegree);
		memset(scccnt, 0, sizeof scccnt);
		memset(vis, 0, sizeof vis);
		for(auto &e : scc) e.clear();
		scc.clear();
		cnt = 0;
		int n,m;
		cin>>n>>m;
		for(int i=0;i<m;i++){
			int a,b;cin>>a>>b;
			edge[a].push_back(b);
			redge[b].push_back(a);
		}
		for(int i=0;i<n;i++){
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
		for(int i=0;i<n;i++){
			for(auto e: edge[i]){
				if(scccnt[i] != scccnt[e]) indegree[scccnt[e]]++;
			}
		}
		int ct = 0;
		int ans = 0;
		for(int i=0;i<cnt;i++){
			if(indegree[i]==0){
				ct++;
				ans = i;
			}
		}
		if(ct > 1) cout<<"Confused\n";
		else{
			for(int i=0;i<n;i++){
				if(scccnt[i]==ans) cout<<i<<'\n';
			}
		}
		cout<<'\n';
	}
}
