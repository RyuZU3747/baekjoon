#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>> que;
vector<pair<int,int>> mat[20001];

int v,e,k,dist[20001],process[20001];

int main(){
	scanf("%d %d %d",&v,&e,&k);
	for(int i=0;i<e;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		mat[a].push_back({b,c});
	}
	for(int i=0;i<20001;i++) dist[i]=123456789;
	dist[k]=0;
	que.push({0,k});
	while(!que.empty()){
		int a = que.top().second;
		que.pop();
		if(process[a])continue;
		process[a]=1;
		for(auto u: mat[a]){
			int b = u.first;
			int w = u.second;
			if(dist[a]+w<dist[b]){
				dist[b]=dist[a]+w;
				que.push({-dist[b],b});
			}
		}
	}
	for(int i=1;i<=v;i++){
		if(dist[i]==123456789) printf("INF\n");
		else printf("%d\n",dist[i]);
	}
}