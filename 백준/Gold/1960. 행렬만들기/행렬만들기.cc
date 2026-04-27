#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<int,vector<int>> graph;
int cap[1003][1003];
int flow[1003][1003];

int doflow(int source, int sink){
	int ret = 0;
	while(1){
		vector<int> parent(1003,-1);
		queue<int> q;
		parent[source] = source;
		q.push(source);
		while(!q.empty() && parent[sink] == -1){
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
	int n;cin>>n;
	vector<int> row;
	vector<int> col;
	int sum = 0;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		sum += a;
		row.push_back(a);
	}
	for(int i=0;i<n;i++){
		int a;cin>>a;
		col.push_back(a);
	}
	for(int i=0;i<n;i++){
		graph[0].push_back(i+1);
		graph[i+1].push_back(0);
		cap[0][i+1] = row[i];
		graph[501+i].push_back(1002);
		graph[501+i].push_back(1002);
		cap[501+i][1002] = col[i];
		for(int j=0;j<n;j++){
			graph[i+1].push_back(501+j);
			graph[501+j].push_back(i+1);
			cap[i+1][501+j] = 1;
		}
	}
	doflow(0,1002);
	int ans[501][501];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(flow[i+1][501+j] == 1) ans[i][j] = 1;
			else ans[i][j] = 0;
		}
	}
	int no = 0;
	for(int i=0;i<n;i++){
		int rs = 0;
		int cs = 0;
		for(int j=0;j<n;j++){
			rs += ans[i][j];
			cs += ans[j][i];
		}
		if(row[i]!=rs) no = 1;
		if(col[i]!=cs) no = 1;
	}
	if(no){
		cout<<-1;
		return 0;
	}
	cout<<1<<'\n';
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<ans[i][j];
		}
		cout<<'\n';
	}
}