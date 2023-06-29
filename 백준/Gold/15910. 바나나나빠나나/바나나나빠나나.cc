#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[100001][7];

int main(){
	FASTIO;
	string s;
	cin>>s;
	int m = s.length();
	for(int i=0;i<100001;i++){
		for(int j=0;j<7;j++) dp[i][j] = 1234567890;
	}
	dp[0][0] = 0;
	for(int i=1;i<=m;i++){
		dp[i][1] = min(dp[i][1],dp[i-1][0]+(s[i-1]!='B' ? 1 : 0));
		dp[i][1] = min(dp[i][1],dp[i-1][1]+(s[i-1]!='B' ? 1 : 0));
		dp[i][1] = min(dp[i][1],dp[i-1][6]+(s[i-1]!='B' ? 1 : 0));
		dp[i][2] = min(dp[i][2], dp[i-1][1] + (s[i-1]!='A' ? 1 : 0));
		dp[i][3] = min(dp[i][3], dp[i-1][2] + (s[i-1]!='N' ? 1 : 0));
		dp[i][4] = min(dp[i][4], dp[i-1][3] + (s[i-1]!='A' ? 1 : 0));
		dp[i][5] = min(dp[i][5], dp[i-1][4] + (s[i-1]!='N' ? 1 : 0));
		dp[i][5] = min(dp[i][5], dp[i-1][6] + (s[i-1]!='N' ? 1 : 0));
		dp[i][6] = min(dp[i][6], dp[i-1][5] + (s[i-1]!='A' ? 1 : 0));
		// cout<<dp[i][1];
		// cout<<dp[i][2];
		// cout<<dp[i][3];
		// cout<<dp[i][4];
		// cout<<dp[i][5];
		// cout<<dp[i][6];
		// cout<<'\n';
	}
	cout<<dp[m][6];
}