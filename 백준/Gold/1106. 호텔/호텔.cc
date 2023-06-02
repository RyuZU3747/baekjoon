#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int c,n;cin>>c>>n;
    int dp[2020];//고객 i명의 최솟값
    vector<pii> arr;
    dp[0] = 0;
    for(int i=1;i<2020;i++) dp[i] = 1234567890;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    for(int i=1;i<=2000;i++){
        for(auto e: arr){
            if(i-e.second<0) continue;
            dp[i] = min(dp[i],dp[i-e.second]+e.first);
        }
    }
    int ans = 1234567890;
    for(int i=c;i<=2000;i++) ans = min(ans,dp[i]);
    cout<<ans;
}