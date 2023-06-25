#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[2010][2010];//위치와 마지막 수

int main(){
	FASTIO;
	int n,l;cin>>n>>l;
	for(int i=1;i<=n;i++){
		dp[1][i] = 1;
	}
	for(int i=1;i<l;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;j*k<=n;k++){
				dp[i+1][j*k] += dp[i][j];
				if(dp[i+1][j*k]>MOD) dp[i+1][j*k] %= MOD;
			}
		}
	}
	ll ans = 0;
	for(int i=1;i<=n;i++){
		ans += dp[l][i];
		ans %= MOD;
	}
	cout<<ans;
}