#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int comp[400001];
int dp2[400001];
vector<int> graph[100001];
int hei[400001];
int mxdep = 0;
int mndep = 1234567890;

int dfs(int cur, int dep){
	if(cur==-1){
		mxdep = max(mxdep, dep);
		mndep = min(mndep, dep);
		return 1;
	}
	int l = dfs(graph[cur][0], dep+1);
	int r = dfs(graph[cur][1], dep+1);
	hei[cur] = max(l,r) + 1;
	return hei[cur];
}

void dfs1(int cur){
	if(cur == -1){
		comp[cur] = 0;
		return;
	}
	int & ret = comp[cur];
	int left = graph[cur][0];
	int right = graph[cur][1];
	dfs1(left);
	dfs1(right);
	if(hei[left] == hei[right] && comp[left]==0 && comp[right]==0) comp[cur] = 0;
	//cout<<cur<<' '<<comp[cur]<<'\n';
	return;
}

int dfs2(int cur){
	if(cur == -1) return -1;
	int & ret = dp2[cur];
	int left = graph[cur][0];
	int right = graph[cur][1];
	int l = dfs2(left);
	int r = dfs2(right);
	if(l==-1) dp2[left] = 0;
	if(r==-1) dp2[right] = 0;
	if(dp2[left]==1234567890&&dp2[right]==1234567890){
		cout<<-1;
		exit(0);
	}
	if(hei[left] < hei[right]) ret = min(ret, dp2[left] + dp2[right] + 1);
	if(hei[left] > hei[right]) ret = min(ret, dp2[left] + dp2[right]);
	if(hei[left] == hei[right]) ret = min(ret, min(comp[left] + dp2[right], dp2[left] + comp[right] + 1));
	//cout<<cur<<' '<<dp2[cur]<<'\n';
	return ret;
}

int main(){
	FASTIO;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int a,b;cin>>a>>b;
		graph[i].push_back(a);
		graph[i].push_back(b);
	}
	for(int i=0;i<400001;i++){
		comp[i] = 1234567890;
		dp2[i] = 1234567890;
	}
	dfs(1,0);
	dfs1(1);
	dfs2(1);
	if(mxdep - mndep > 1||dp2[1]==1234567890) cout<<-1;
	else cout<<dp2[1];
}