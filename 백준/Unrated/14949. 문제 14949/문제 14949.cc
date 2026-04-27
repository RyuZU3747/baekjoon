#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll f[402];
ll dp[6][202];
ll mod = 1000000007;
int h, w;

ll poww(ll x, ll e){
    if(e == 1){
        return x;
    }
    if(e&1){
        return (x*poww(x, e-1))%mod;
    }
    else{
        ll tmp = poww(x, e/2);
        return (tmp*tmp)%mod;
    }
}

int main(){
    dp[0][1] = 1;
    f[0] = 1;
    f[1] = 1;
    for(int i=2; i<402; i++){
        f[i] = f[i-1]*i;
        f[i] %= mod;
    }
    scanf("%d %d", &h, &w);
    for(int i=1; i<=h; i++){
        for(int j=1; j<=w; j++){
            for(int k=1; k<=w; k++){
                ll tmp = f[j+k-1];
                tmp *= poww(f[k], mod-2);
                tmp %= mod;
                tmp *= poww(f[j-1], mod-2);
                tmp %= mod;
                //printf("<%d %d %d %lld %lld %lld>\n", i, j, k, f[j+k-1], poww(f[k], mod-2)%mod);
                dp[i][k] += (tmp*dp[i-1][j]);
                dp[i][k] %= mod;
            }
        }
    }
    ll res = 0;
    for(int i=1; i<=w; i++){
        res += dp[h][i];
        res %= mod;
    }
    printf("%lld", res);
    return 0;
}