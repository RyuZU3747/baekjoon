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
    int n;cin>>n;
    vector<int> arr(n);
    int dp[100010];//i를 만드는 경우의 수
    memset(dp, 0, sizeof dp);
    for(auto &x:arr){
        cin>>x;
        dp[x] = 1;
    }
    int q;cin>>q;
    vector<int> mak(q);
    for(auto &x:mak){
        cin>>x;
    }

    for(ll i=1;i<=100000;i++){
        for(ll j=2;i*j <= 100000;j++){
            dp[i*j] += dp[i];
        }
    }
    for(int i=0;i<q;i++) cout<<dp[mak[i]]<<' ';
}