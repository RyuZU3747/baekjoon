#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[100001];//n번 노드에서 갈 수 있는 최대거리
map<int, vector<int>> graph;
vector<int> degree(100001);

int dfs(int cur){
	int & ret = dp[cur];
	if(ret > 0) return ret;
	for(auto e: graph[cur]){
		if(degree[e] > degree[cur]){
			ret = max(ret, dfs(e) + 1);
		}
	}
	return ret;
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
		degree[a]++;
		degree[b]++;
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		ans = max(ans, dfs(i));
	}
	cout<<ans+1;
}