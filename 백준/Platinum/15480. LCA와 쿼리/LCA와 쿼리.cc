#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int parent[100010][18];
int depth[100010];
vector<int> tree[100010];
int n;

int lca(int a, int b){
	if(depth[a] < depth[b]) swap(a,b);
	int dif = depth[a] - depth[b];

	for(int i=0;dif;i++){
		if(dif&1){
			a = parent[a][i];
		}
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
		if(depth[e]==-1){
			parent[e][0] = cur;
			depth[e] = depth[cur] + 1;
			dfs(e);
		}
	}
}

void init(){
	for(int j=1;j<18;j++){
		for(int i=2;i<=n;i++){
			if(parent[i][j-1]!=0){
				parent[i][j] = parent[parent[i][j-1]][j-1];
			}
		}
	}
}

int main(){
	FASTIO;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	for(int i=1;i<100010;i++){
		depth[i] = -1;
	}
	depth[1] = 0;
	dfs(1);
	init();
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int r,a,b;cin>>r>>a>>b;
		int one = lca(r,a);
		int two = lca(r,b);
		int thd = lca(a,b);
		if(depth[thd] >= depth[two] && depth[thd] >= depth[one]) cout<<thd;
		else if(depth[two] >= depth[thd] && depth[two] >= depth[one]) cout<<two;
		else if(depth[one] >= depth[thd] && depth[one] >= depth[two]) cout<<one;
		cout<<'\n';
	}
}