#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

vector<int> graph[1001];
queue<int> q;
vector<int> ans;
int d[1001];
int dp[1001];
int indegree[1001];

void topolsort(int n){
	for(int i=1;i<=n;i++){
		if(indegree[i]==0){
			q.push(i);
			dp[i] = d[i];
		}
	}
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int i=0;i<graph[cur].size();i++){
			int next = graph[cur][i];
			dp[next] = Max(dp[next],dp[cur]+d[next]);
			indegree[next]--;
			if(indegree[next]==0) q.push(next);
		}
	}
}

int main(){
	int n,k,x,y,t,w;
	scanf("%d",&t);
	while(t--){
		
		while(!ans.empty()) ans.pop_back();
		for(int i=0;i<1001;i++){
			while(!graph[i].empty()) graph[i].pop_back();
			d[i]=0;
			dp[i]=0;
			indegree[i]=0;
		}
		
		
		scanf("%d %d",&n,&k);
		for(int i=1;i<=n;i++) scanf("%d",&d[i]);
		for(int i=0;i<k;i++){
			scanf("%d %d",&x,&y);
			graph[x].push_back(y);
			indegree[y]++;
		}
		scanf("%d",&w);
		topolsort(n);
		printf("%d\n",dp[w]);
	}
}