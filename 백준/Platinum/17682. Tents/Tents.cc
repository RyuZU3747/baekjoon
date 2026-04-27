#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[3001][3001];

ll recur(int r, int c){
    if(r==0||c==0) return 1;
    ll & ret = dp[r][c];
    if(ret!=-1) return ret;
    ret = 0;
    ret += recur(r-1, c) % MOD;
    ret += 4 * c * (recur(r-1,c-1)) % MOD;
    if(c>=2)
        ret += c*(c-1)/2 * (recur(r-1,c-2)) % MOD;
    if(r>=2)
        ret += c*(r-1) * (recur(r-2,c-1)) % MOD;
    ret %= MOD;
    return ret;
}

int main(){
    int h,w;cin>>h>>w;
    memset(dp, -1, sizeof dp);
    cout<<recur(w,h)-1;
}