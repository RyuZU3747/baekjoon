#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<int,vector<int>> graph;
map<int,vector<int>> rgraph;
map<pii, int> cap;
map<pii, int> flow;

int doflow(int source, int sink){
	int ret = 0;
	while(1){
		vector<int> parent(802,-1);
		queue<int> q;
		parent[source] = source;
		q.push(source);
		while(!q.empty() && parent[sink] == -1){//경로찾으면 탈출
			int cur = q.front();
			q.pop();
			for(auto nxt: graph[cur]){
				if(cap[{cur,nxt}] - flow[{cur,nxt}] > 0 && parent[nxt] == -1){
					q.push(nxt);
					parent[nxt] = cur;
				}
			}
		}
		if(parent[sink] == -1) break;
		int f = 123456789;
		for(int i=sink;i!=source;i=parent[i]){
			f = min(cap[{parent[i],i}] - flow[{parent[i],i}], f);
		}
		for(int i=sink;i!=source;i=parent[i]){
			flow[{parent[i],i}] += f;
			flow[{i,parent[i]}] -= f;
		}
		ret += f;
	}
	return ret;
}

int main(){
	int n,p;cin>>n>>p;
	for(int i=1;i<=n;i++){
		graph[i].push_back(i+400);
		graph[i+400].push_back(i);
		cap[{i,i+400}] = 1;
	}
	for(int i=0;i<p;i++){
        int a,b;cin>>a>>b;//n은 in, 400+n은 out
		graph[400+a].push_back(b);
		graph[b].push_back(400+a);
		graph[400+b].push_back(a);
		graph[a].push_back(400+b);
		cap[{400+a,b}] = 1;
		cap[{400+b,a}] = 1;
	}
	cout<<doflow(401,2);
}