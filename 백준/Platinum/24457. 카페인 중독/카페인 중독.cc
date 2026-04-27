#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[5001][5001];

int main(){
    int n;cin>>n;
    vector<pair<ll,ll>> dr(n);
    for(auto &x: dr) cin>>x.first;
    for(auto &x: dr) cin>>x.second;
    sort(dr.begin(),dr.end(),[](pii a, pii b){
        if(a.second==b.second) return a.first > b.first;
        return a.second < b.second;
    });
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j] = max(dp[i][j], dp[i-1][j]); //안먹음
            if(j!=n) dp[i][j] = max(dp[i][j], dp[i-1][j+1] + dr[i-1].first - j*dr[i-1].second);
        }
    }
    ll ans = 0;
    for(int i=0;i<=n;i++){
        ans = max(ans, dp[n][i]);
    }
    cout<<ans;
}