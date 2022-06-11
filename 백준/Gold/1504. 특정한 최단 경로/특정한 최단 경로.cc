#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

vector<pair<int,int>> v[801]; //[시작],도착,가중
priority_queue<pair<int,int>> pq; //거리, 정점
int visited[801];

int djik(int start, int end){
	int dist[801];
	for(int i=0;i<801;i++){
		dist[i]=123456789;
		visited[i] = 0;
	}
	dist[start]=0;
	pq.push(make_pair(0,start));
	while(!pq.empty()){
		int x = pq.top().second;
		pq.pop();
		if(visited[x]) continue;
		visited[x]=1;
		for(auto u: v[x]){
			int y = u.first;
			int w = u.second;
			if(dist[x]+w<dist[y]){
				dist[y]=dist[x]+w;
				pq.push(make_pair(-dist[y],y));
			}
		}
	}
	return dist[end];
}

int main(){
	int n, e;
	cin>>n>>e;
	for(int i=0;i<e;i++){
		int a,b,c;
		cin>>a>>b>>c;
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	int must1,must2;
	cin>>must1>>must2;
	int mn = 123456789;
	int a1,a2;
	a1 = djik(1,must1) + djik(must1,must2) + djik(must2,n);
	a2 = djik(1,must2) + djik(must2,must1) + djik(must1,n);
	int ans = Min(a1,a2);
	if(ans>123456788) cout<<"-1";
	else cout<<ans;
}