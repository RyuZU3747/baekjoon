#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int dp[31];
    dp[0] = 1;
    dp[2] = 3;
    if(n%2==1) cout<<0;
    else{
        for(int i=4;i<=n;i+=2){
            dp[i] = dp[i-2]*3;
            for(int j=4;j<=i;j+=2) dp[i] += dp[i-j]*2;
        }
        cout<<dp[n];
    }
}