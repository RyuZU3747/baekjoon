#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll parent[400010][18];
ll depth[400010];
ll len[400010][18];
vector<pii> tree[400010];
ll n;

pair<ll,ll> lca(ll a, ll b){
	if(depth[a] < depth[b]) swap(a,b);
	ll dif = depth[a] - depth[b];
	ll length = 0;
	for(ll i=0;dif;i++){
		if(dif&1){
			length += len[a][i];
			a = parent[a][i];
		}
		dif >>= 1;
	}
	if(a!=b){
		for(ll j=17;j>=0;j--){
			if(parent[a][j] != 0 && parent[a][j] != parent[b][j]){
				length += len[a][j];
				length += len[b][j];
				a = parent[a][j];
				b = parent[b][j];
			}
		}
		length += len[b][0];
		length += len[a][0];
		a = parent[a][0];
	}
	return {a,length};
}

void dfs(ll cur){
	for(auto e:tree[cur]){
		if(depth[e.first]==-1){
			parent[e.first][0] = cur;
			len[e.first][0] = e.second;
			depth[e.first] = depth[cur] + 1;
			dfs(e.first);
		}
	}
}

void init(){
	for(ll j=1;j<18;j++){
		for(ll i=2;i<=n;i++){
			if(parent[i][j-1]!=0){
				parent[i][j] = parent[parent[i][j-1]][j-1];
				len[i][j] = len[i][j-1]+len[parent[i][j-1]][j-1];
			}
		}
	}
}

int main(){
	FASTIO;
	cin>>n;
	for(ll i=0;i<n-1;i++){
		ll a,b,c;cin>>a>>b>>c;
		tree[a].push_back({b,c});
		tree[b].push_back({a,c});
	}
	for(ll i=1;i<400010;i++){
		depth[i] = -1;
	}
	depth[1] = 0;
	dfs(1);
	init();
	ll m;cin>>m;
	for(ll i=0;i<m;i++){
		ll a,b,c;cin>>a>>b>>c;
		if(a==1) cout<<lca(b,c).second<<'\n';
		else{
			ll d;cin>>d;
			ll tmrt = lca(b,c).first;
			ll stdp = depth[b] - depth[tmrt];
			ll eddp = depth[c] - depth[tmrt];
			if(stdp+1>d){
				ll tmp = b;
				d--;
				for(ll i=0;d;i++){
					if(d&1){
						tmp = parent[tmp][i];
					}
					d >>= 1;
				}
				cout<<tmp<<'\n';
			}
			else if(stdp+1<d){
				d -= stdp+1;
				d = eddp-d;
				ll tmp = c;
				for(ll i=0;d;i++){
					if(d&1){
						tmp = parent[tmp][i];
					}
					d >>= 1;
				}
				cout<<tmp<<'\n';
			}
			else if(stdp+1 == d) cout<<tmrt<<'\n';
		}
	}
}