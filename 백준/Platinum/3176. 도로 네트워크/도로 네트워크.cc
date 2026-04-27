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
int mn[100010][18];
int mx[100010][18];
int mxx,mnn;
vector<pii> tree[100010];
int n;

int lca(int a, int b){
	if(depth[a] < depth[b]) swap(a,b);
	int dif = depth[a] - depth[b];

	for(int i=0;dif;i++){
		if(dif&1){
			mxx = max(mxx, mx[a][i]);
			mnn = min(mnn, mn[a][i]);
			a = parent[a][i];
		}
		dif >>= 1;
	}
	if(a!=b){
		for(int j=17;j>=0;j--){
			if(parent[a][j] != 0 && parent[a][j] != parent[b][j]){
				mxx = max(mxx, max(mx[a][j],mx[b][j]));
				mnn = min(mnn, min(mn[a][j],mn[b][j]));
				a = parent[a][j];
				b = parent[b][j];
			}
		}
		mxx = max(mxx, max(mx[a][0],mx[b][0]));
		mnn = min(mnn, min(mn[a][0],mn[b][0]));
		a = parent[a][0];
	}
	cout<<mnn<<' '<<mxx<<'\n';
	return a;
}

void dfs(int cur){
	for(auto e:tree[cur]){
		if(depth[e.first]==-1){
			parent[e.first][0] = cur;
			mn[e.first][0] = e.second;
			mx[e.first][0] = e.second;
			depth[e.first] = depth[cur] + 1;
			dfs(e.first);
		}
	}
}

void init(){
	for(int j=1;j<18;j++){
		for(int i=2;i<=n;i++){
			if(parent[i][j-1]!=0){
				parent[i][j] = parent[parent[i][j-1]][j-1];
				mn[i][j] = min(mn[i][j-1],mn[parent[i][j-1]][j-1]);
				mx[i][j] = max(mx[i][j-1],mx[parent[i][j-1]][j-1]);
			}
		}
	}
}

int main(){
	FASTIO;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int a,b,c;cin>>a>>b>>c;
		tree[a].push_back({b,c});
		tree[b].push_back({a,c});
	}
	for(int i=1;i<100010;i++){
		depth[i] = -1;
		for(int j=0;j<18;j++) mn[i][j] = 1234567890;
	}
	depth[1] = 0;
	dfs(1);
	init();
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		mnn = 1234567890; mxx = 0;
		lca(a,b);
	}
}