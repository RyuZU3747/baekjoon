#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int root[100001];

int find(int x){
	return root[x] = root[x]==x ? x : find(root[x]);
}

void Union(int x, int y){
	x = find(x);
	y = find(y);
	if(x>y) root[x]=y;
	else root[y]=x;
}

int main(){
	int g, p, gi, cnt = 0;
	cin>>g>>p;
	for(int i=0;i<100001;i++) root[i] = i;
	for(int i=0;i<p;i++){
		cin>>gi;
		int tmp = find(gi);
		if(tmp!=0){
			cnt++;
			Union(tmp,tmp-1);
		}
		else break;
	}
	cout<<cnt;
}