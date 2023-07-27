#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


vector<int> graph[2003];
int cap[2003][2003];
int flow[2003][2003];

int doflow(int source, int sink){
	int ret = 0;
	while(1){
		vector<int> parent(2003,-1);
		queue<int> q;
		parent[source] = source;
		q.push(source);
		while(!q.empty() && parent[sink] == -1){//경로찾으면 탈출
			int cur = q.front();
			q.pop();
			for(auto nxt: graph[cur]){
				if(cap[cur][nxt] - flow[cur][nxt] > 0 && parent[nxt] == -1){
					q.push(nxt);
					parent[nxt] = cur;
				}
			}
		}
		if(parent[sink] == -1) break;
		int f = 123456789;
		for(int i=sink;i!=source;i=parent[i]){
			f = min(cap[parent[i]][i] - flow[parent[i]][i], f);
		}
		for(int i=sink;i!=source;i=parent[i]){
			flow[parent[i]][i] += f;
			flow[i][parent[i]] -= f;
		}
		ret += f;
	}
	return ret;
}

int main(){
    FASTIO;
	int n,k,d;cin>>n>>k>>d;
	int sink = 500;
	for(int i=1;i<=d;i++){
		int a;cin>>a;
		graph[n+i].push_back(sink);
		graph[sink].push_back(n+i);
		cap[n+i][sink] = a;
	}

	for(int i=1;i<=n;i++){
		graph[0].push_back(i);
		graph[i].push_back(0);
		cap[0][i] = k;
		int a;cin>>a;
		for(int j=0;j<a;j++){
			int b;cin>>b;
			graph[i].push_back(n+b);
			graph[n+b].push_back(i);
			cap[i][n+b] = 1;
		}
	}
	cout<<doflow(0, 500);
}