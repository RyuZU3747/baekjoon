#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int root[1000010];

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
	int n,m;
	cin>>n>>m;
	for(int i=0;i<=n;i++) root[i]=i;
	for(int i=0;i<m;i++){
		int t,a,b;
		cin>>t>>a>>b;
		if(t==0){
			if(find(a)!=find(b)) Union(a,b);
		}
		else{
			if(find(a)==find(b)) cout<<"YES"<<'\n';
			else cout<<"NO"<<'\n';
		}
	}
}