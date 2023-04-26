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
    int n,m;cin>>n>>m;
    vector<int> sz;
    for(int i=0;i<m;i++){
        int a;cin>>a;
        sz.push_back(a);
    }
    for(int j=0;j<m;j++){
        for(int k=j+1;k<m;k++){
            sz.push_back(sz[k]+sz[j]);
        }
    }
    ll dp[20001];//i그릇을 몇 번?
    for(int i=0;i<20001;i++) dp[i] = 1234567890;
    for(auto x: sz) dp[x] = 1;
    dp[0] = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i-j < 0) continue;
            dp[i] = min(dp[i], dp[i-j] + dp[j]);
        }
    }
    if(dp[n]==1234567890) cout<<-1;
    else cout<<dp[n];
}