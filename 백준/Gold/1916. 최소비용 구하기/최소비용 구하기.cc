#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
    int v,e;cin>>v>>e;
	map<int,vector<pii>> graph;
    for(int i=0;i<e;i++){
        int a,b,c;cin>>a>>b>>c;
        graph[a].push_back(make_pair(b,c));
    }
	int a,b;cin>>a>>b;
	int dist[2001];
	for(int i=0;i<2001;i++) dist[i] = 123457890;
    dist[a] = 0;
	priority_queue<pii> pq;
    pq.push(make_pair(0,a));
    while(!pq.empty()){
        int cur = pq.top().second;
        int dis = -pq.top().first;
        pq.pop();
		if(dis != dist[cur]) continue;
        for(auto x: graph[cur]){
            int next = x.first;
            int wei = x.second;
            if(dist[next] > dis+wei){
                dist[next] = dis+wei;
                pq.push(make_pair(-(dis+wei),next));
            }
        }
    }
	cout<<dist[b];
}