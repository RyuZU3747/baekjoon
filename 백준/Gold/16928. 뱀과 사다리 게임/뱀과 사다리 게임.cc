#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int lad[101];
int sna[101];
int vis[101];

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		lad[x] = y;
	}
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		sna[x] = y;
	}
	
	queue<pii> q;
	q.push(make_pair(1,0));
	vis[1] = 1;
	while(!q.empty()){
		int cur = q.front().first;
		int su = q.front().second;
		q.pop();
		if(cur == 100){
			cout<<su;
			break;
		}
		for(int i=1;i<=6;i++){
			int nex = cur + i;
			if(lad[nex]) nex = lad[nex];
			if(sna[nex]) nex = sna[nex];
			if(nex>0&&nex<101&&vis[nex]==0){
				q.push(make_pair(nex, su+1));
				vis[nex] = 1;
			}
		}
	}
}