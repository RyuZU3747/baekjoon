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
    for(int i=0;i<100001;i++) dp[i] = 1234567890;
    for(auto x: coin) dp[x] = 1;
    for(auto x: coin){
        for(int i=0;i<=k;i++){
            if(i-x<0) continue;
            dp[i] = min(dp[i], dp[i-x]+1);
        }
    }
    cout<<(dp[k]==1234567890 ? -1 : dp[k]);
}