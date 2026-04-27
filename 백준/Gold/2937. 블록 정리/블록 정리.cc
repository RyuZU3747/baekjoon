#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int mp[202][202];
int presum[202][202];

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		mp[a][b] = 1;
	}
	for(int i=1;i<=n;i++) {
		presum[1][i] = presum[1][i-1]+mp[1][i];
		presum[i][1] = presum[i-1][1]+mp[i][1];
	}
	for(int r=2;r<=n;r++){
		for(int c=2;c<=n;c++){
			presum[r][c] = presum[r-1][c] + presum[r][c-1] - presum[r-1][c-1] + mp[r][c];
		}
	}
	int ans = 1234567890;
	for(int rs = 1;rs<=m;rs++){
		if(m%rs) continue;
		int cs = m/rs;
		for(int r=1;r<=n-rs+1;r++){
			for(int c=1;c<=n-cs+1;c++){
				int block = presum[r+rs-1][c+cs-1] + presum[r-1][c-1] - presum[r-1][c+cs-1] - presum[r+rs-1][c-1];
				ans = min(ans, m-block);
			}
		}
	}
	cout<<ans;
}