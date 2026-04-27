#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[10003][503];

int main(){
    int n,m;cin>>n>>m;
    vector<int> dis;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        dis.push_back(a);
    }
    dp[0][0] = 0;
    for(int i=1;i<=n;i++){
        dp[i][0] = dp[i-1][0];
        for(int j=1;j<=m;j++){
            dp[i][j] = max(dp[i][j], dp[i-1][j-1] + dis[i-1]);
            if(i-j>=0) dp[i][0] = max(dp[i][0], dp[i-j][j]);
        }
    }
    cout<<dp[n][0];
}