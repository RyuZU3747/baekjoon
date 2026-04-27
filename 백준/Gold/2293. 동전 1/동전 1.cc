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
    vector<int> coin;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        coin.push_back(a);
    }
    sort(coin.begin(),coin.end());
    int dp[100001];
    dp[0] = 1;
    for(auto x: coin){
        for(int i=0;i<=k;i++){
            dp[i+x] += dp[i];
        }
    }
    cout<<dp[k];
}