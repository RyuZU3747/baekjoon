#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define pii pair<int, int>
using namespace std;

ll dist[101][101];

int main(){
	FASTIO;
	memset(dist, 0x3f, sizeof dist);
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		ll a,b,w;cin>>a>>b>>w;
		dist[a][b] = min(dist[a][b], w);
	}
	for(int i=1;i<=n;i++) dist[i][i] = 0;

	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}	
		}	
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(dist[i][j] > 1234567890) cout<<"0 ";
			else cout<<dist[i][j]<<' ';
		}
		cout<<'\n';
	}
}