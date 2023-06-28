#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int parent[100001][18];
int depth[100001];
int len[100001];
vector<pii> tree[100001];
int n;

int lca(int a, int b){
	if(depth[a] < depth[b]) swap(a,b);
	int dif = depth[a] - depth[b];

	for(int i=0;dif;i++){
		if(dif&1) a = parent[a][i];
		dif >>= 1;
	}
	if(a!=b){
		for(int j=17;j>=0;j--){
			if(parent[a][j] != 0 && parent[a][j] != parent[b][j]){
				a = parent[a][j];
				b = parent[b][j];
			}
		}
		a = parent[a][0];
	}
	return a;
}

void dfs(int cur){
	for(auto e:tree[cur]){
		if(depth[e.first]==-1){
			parent[e.first][0] = cur;
			depth[e.first] = depth[cur] + 1;
			len[e.first] = len[cur] + e.second;
			dfs(e.first);
		}
	}
}

void init(){
	for(int j=0;j<17;j++){
		for(int i=1;i<=n;i++){
			if(parent[i][j]!=0) parent[i][j+1] = parent[parent[i][j]][j];
		}
	}
}

int lendfs(int cur){

}

int main(){
	FASTIO;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b,c;cin>>a>>b>>c;
		tree[a].push_back({b,c});
		tree[b].push_back({a,c});
	}
	for(int i=0;i<100001;i++) depth[i] = -1;
	depth[1] = 0;
	dfs(1);
	init();
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		cout<<len[a] + len[b] - 2*len[lca(a,b)]<<'\n';
	}
}