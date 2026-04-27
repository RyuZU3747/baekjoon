#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> graph[100001];
int parent[100001];
void dfs(int cur){
	for(auto nxt: graph[cur]){
		if(parent[nxt] != 0) continue;
		parent[nxt] = cur;
		dfs(nxt);
	}
}

int main(){
	FASTIO;
	int n;cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	parent[1] = -1;
	dfs(1);
	for(int i=2;i<=n;i++){
		cout<<parent[i]<<'\n';
	}
}