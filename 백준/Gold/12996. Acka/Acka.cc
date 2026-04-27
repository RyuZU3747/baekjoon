#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[51][51][51][51];

int main(){
	int s;cin>>s;
	int a,b,c;cin>>a>>b>>c;
	dp[0][0][0][0] = 1;
	for(int song = 1;song<=s;song++){
		for(int i=0;i<=a;i++){
			for(int j=0;j<=b;j++){
				for(int k=0;k<=c;k++){
					if(i>0&&j>0&&k>0) dp[song][i][j][k] += dp[song-1][i-1][j-1][k-1];

					if(j>0&&k>0) dp[song][i][j][k] += dp[song-1][i][j-1][k-1];
					if(i>0&&k>0) dp[song][i][j][k] += dp[song-1][i-1][j][k-1];
					if(i>0&&j>0) dp[song][i][j][k] += dp[song-1][i-1][j-1][k];

					if(i>0) dp[song][i][j][k] += dp[song-1][i-1][j][k];
					if(j>0) dp[song][i][j][k] += dp[song-1][i][j-1][k];
					if(k>0) dp[song][i][j][k] += dp[song-1][i][j][k-1];

					dp[song][i][j][k] %= MOD;
				}
			}
		}
	}
	cout<<dp[s][a][b][c]%MOD;
}