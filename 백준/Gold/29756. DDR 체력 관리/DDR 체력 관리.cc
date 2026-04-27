#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,k;cin>>n>>k;
    vector<int> s(n);
    vector<int> h(n);
    for(auto &x:s) cin>>x; 
    for(auto &x:h) cin>>x; 
    int dp[2001][201]; // i에서  체력이 j일때 최대
    for(int i=0;i<n;i++){
        for(int j=100;j>=0;j--){
            if(j>=h[i]) dp[i+1][min(100,j-h[i]+k)] = max(dp[i+1][min(100,j-h[i]+k)], dp[i][j] + s[i]);//안넘기면
            dp[i+1][min(100,j+k)] = max(dp[i+1][min(100,j+k)], dp[i][j]); // 넘기기
        }
    }
    int ans = 0;
    for(int i=0;i<101;i++){
        ans = max(ans, dp[n][i]);
    }
    cout<<ans;
}