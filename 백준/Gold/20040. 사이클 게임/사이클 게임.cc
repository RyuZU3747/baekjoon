#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int root[500001];
vector<tuple<int,int>> edge; //가중 출발 도착

int find(int x){
	return root[x] = root[x]==x ? x : find(root[x]);
}

void Union(int x, int y){
	x = find(x);
	y = find(y);
	if(x==y) return;
	if(x>y) root[y]=x;
	else root[x]=y;
}

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int v,e;
	cin>>v>>e;
	for(int i=0;i<500001;i++) root[i]=i;
	for(int i=0;i<e;i++){
		int a,b,c;
		cin>>a>>b;
		edge.push_back(make_tuple(a,b));
	}
	int ans = 0;
	for(int i=0;i<e;i++){
		int x = get<0>(edge[i]);
		int y = get<1>(edge[i]);
		if(find(x)!=find(y)){
			Union(x,y);
		}
		else{
			ans = i+1;
			break;
		}
	}
	cout<<ans;
}