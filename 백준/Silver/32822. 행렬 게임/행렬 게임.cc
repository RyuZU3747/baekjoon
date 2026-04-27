#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int a[1001][1001];
int b[1001];

int main(){
	FASTIO;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x;cin>>x;
			b[j] = max(b[j],abs(a[i][j] - x));
		}
	}
	ll ans = 0;
	for(int i=0;i<m;i++){
		int x;cin>>x;
		ans += b[x-1];
	}
	cout<<ans;
}