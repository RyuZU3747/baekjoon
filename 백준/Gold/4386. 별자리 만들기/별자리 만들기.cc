#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int root[101];
vector<tuple<double,int,int>> edge; //가중 출발 도착
vector<pair<double,double>> star;

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
	int n;
	cin>>n;
	for(int i=0;i<101;i++) root[i]=i;
	for(int i=1;i<=n;i++){
		double a,b;
		cin>>a>>b;
		star.push_back(make_pair(a,b));
		if(i==1) continue;
		for(int j=0;j<i;j++){
			if(i-1==j) continue;
			double w = sqrt((star[j].first - a)*(star[j].first - a) + (star[j].second - b)*(star[j].second - b));
			edge.push_back(make_tuple(w,i-1,j));
		}
	}
	sort(edge.begin(),edge.end());
	double ans = 0;
	for(int i=0;i<edge.size();i++){
		int x = get<1>(edge[i]);
		int y = get<2>(edge[i]);
		double w = get<0>(edge[i]);
		if(find(x)!=find(y)){
			Union(x,y);
			ans+=w;
		}
	}
	cout<<ans;
}