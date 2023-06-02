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
		vector<int> parent(53,-1);
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
	int n;cin>>n;
	for(int i=0;i<n;i++){
        char a, b;int c;cin>>a>>b>>c;
        if(a>='a'&&a<='z') a -= 'a';
        else a = a - 'A' + 26;
        if(b>='a'&&b<='z') b -= 'a';
        else b = b - 'A' + 26;
		graph[a].push_back(b);
		graph[b].push_back(a);
		cap[{a,b}] += c;
		cap[{b,a}] += c;
		flow[{a,b}] = 0;
		flow[{b,a}] = 0;
	}
	cout<<doflow(26,51);
}