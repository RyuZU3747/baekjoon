#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[10000001];

int main(){
    FASTIO;
    int t;cin>>t;
    dp[0] = 1;
    dp[1] = 1;
    for(int i=4;i<=10000001;i++){
        dp[i] = (((((((i+1)*dp[i-1])%MOD - (i-2)*dp[i-2])+MOD)%MOD - (i-5)*dp[i-3])+MOD)%MOD + (i-3)*dp[i-4]) % MOD;
    }
    while(t--){
        int a;cin>>a;
        cout<<(dp[a]+MOD)%MOD<<'\n';
    }
}