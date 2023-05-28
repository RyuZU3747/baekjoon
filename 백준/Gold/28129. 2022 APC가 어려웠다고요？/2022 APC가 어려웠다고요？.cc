#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,avx,avx2")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[3001][3001];//문제 난이도,i번째 문제를 결정하는 경우
int n,k,i,j,t,a,b;;    
int difa[3001];
int difb[3001];
ll ans;

int main(){
    FASTIO;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        difa[i] = a;
        difb[i] = b;
    }
    for(j=difa[0];j<=difb[0];j++) dp[0][j] = 1;
    for(i=1;i<3001;i++) dp[0][i] += dp[0][i-1];
    for(i=1;i<n;i++){//n제곱???
        for(t=difa[i];t<=difb[i];t++){
            dp[i][t] = dp[i-1][min(3000,t+k)] - dp[i-1][max(1,t-k)-1];
            dp[i][t] %= MOD;
        }
        for(int j=1;j<3001;j++) dp[i][j] += dp[i][j-1];
    }
    ans = dp[n-1][difb[n-1]] - dp[n-1][difa[n-1]-1];
    ans %= MOD;
    printf("%lld",ans);
}