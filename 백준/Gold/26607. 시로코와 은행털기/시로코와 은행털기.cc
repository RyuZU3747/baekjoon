#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[81][81][16001];

int main(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<pii> t(81);
    for(int i=1;i<=n;i++){
        cin>>t[i].first>>t[i].second;
    }
    dp[0][0][0] = 1;
    for(int i=1;i<=n;i++){
        dp[i][0][0] = 1;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=k;j++){
            for(int s=0;s<16001;s++){
                if(dp[i-1][j][s]==1) dp[i][j][s] = 1;
                if(j>0&&s-t[i].first>=0&&dp[i-1][j-1][s-t[i].first]==1) dp[i][j][s] = 1;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<16001;i++){
        if(dp[n][k][i]==1){
            ans = max(ans, i*(x*k-i));
        }
    }
    cout<<ans;
}