#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	int n,k;cin>>n>>k;
	int w[101],v[101];
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	int dp[101][100001];
	dp[0][0] = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(w[i]<=j){
				dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
			else dp[i][j] = dp[i-1][j];
		}
	}
	cout<<dp[n][k];
}