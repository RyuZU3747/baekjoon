#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

vector<int> graph[32001];
queue<int> q;
vector<int> ans;
int indegree[32001];

void topolsort(int n){
	for(int i=1;i<=n;i++){
		if(indegree[i]==0) q.push(i);
	}
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		ans.push_back(cur);
		for(int i=0;i<graph[cur].size();i++){
			int next = graph[cur][i];
			indegree[next]--;
			if(indegree[next]==0) q.push(next);
		}
	}
}

int main(){
	int n,m,a,b;
	scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		graph[a].push_back(b);
		indegree[b]++;
	}
	topolsort(n);
	for(int i=0;i<n;i++){
		printf("%d ",ans[i]);
	}
}