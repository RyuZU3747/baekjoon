#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

ll dp[1500001];

int main(){
    FASTIO;
    int n;cin>>n;
    vector<pii> coun;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        coun.push_back({a,b});
    }
    dp[0] = 0;
    for(int i=0;i<=n;i++){
        dp[i] = max(dp[i],dp[i-1]);
        if(i+coun[i].first<=n){
            dp[i+coun[i].first] = max(dp[i+coun[i].first], dp[i] + coun[i].second);
        }
    }
    cout<<dp[n];
}