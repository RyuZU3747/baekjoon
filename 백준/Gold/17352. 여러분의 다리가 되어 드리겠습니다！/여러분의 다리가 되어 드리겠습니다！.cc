#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int root[300001];

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
	for(int i=0;i<300001;i++) root[i]=i;
	for(int i=0;i<n-2;i++){
		int a,b;
		cin>>a>>b;
		if(find(a)!=find(b)) Union(a,b);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(find(i)!=find(j)){
				cout<<find(i)<<' '<<find(j);
				return 0;
			}
		}
	}
}