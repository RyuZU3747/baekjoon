#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[1001][1001];

int recur(int n, int k){
    if(n==1&&k==1) return 1;
    if(n<0||k<0||k*2>n) return 0;
    int & ret = dp[n][k];
    if(ret != -1) return ret;
    if(k==0) return ret = 0;
    if(k==1) return ret = n;
    ret = (recur(n-1, k) + recur(n-2, k-1)) % MOD;
    return ret;
}

int main(){
    FASTIO;
    int n,k;cin>>n>>k;
    memset(dp, -1, sizeof dp);
    cout<<recur(n,k);
}