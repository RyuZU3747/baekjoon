#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000000
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

ll dp[101][10][1<<10];//자리 마지막 사용

int main(){
    ll n;cin>>n;
    for(int i=1;i<=9;i++) dp[1][i][1<<i]=1; //1~9의 1자리수는 하나
    for(int i=2;i<=n;i++){//2자리수부터n자리까지
        for(int j=0;j<=9;j++){//붙일 숫자, 0도 씀
            for(ll k=0;k<(1<<10);k++){//사용한 자리수별로 개수 구하기
                ll used = k|(1<<j);
                if(j==0) dp[i][j][used] = (dp[i][j][used]+dp[i-1][j+1][k])%MOD;//0이면 1만
                else if(j==9) dp[i][j][used] = (dp[i][j][used]+dp[i-1][j-1][k])%MOD;//9면 8만
                else dp[i][j][used] = (dp[i][j][used]+dp[i-1][j-1][k]+dp[i-1][j+1][k])%MOD;
            }
        }
    }
    ll ans=0;
    for(int i=0;i<10;i++){
        ans+=dp[n][i][1023];
        ans%=MOD;
    }
    cout<<ans;
}