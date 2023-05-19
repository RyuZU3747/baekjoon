#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int arr[501][501];
    for(int i=1;i<=n;i++){
        for(int j=0;j<m;j++) cin>>arr[i][j];
    }
    int dp[501][501]; //n회차, 이전에 쓴 무기 = 최소 시간
    for(int i=0;i<m;i++) dp[1][i] = arr[1][i]; //1회차는 자신
    for(int i=2;i<=n;i++){
        for(int j=0;j<m;j++) dp[i][j] = 1234567890;
    }
    for(int i=1;i<=n;i++){ //회차마다
        for(int j=0;j<m;j++){ //이번무기 최소시간
            for(int k=0;k<m;k++){ //이전에쓴거 빼고ㅋㅋ
                if(j==k) continue;
                dp[i][j] = min(dp[i-1][k] + arr[i][j], dp[i][j]);
            }
        }
    }
    int ans = 1234567890;
    for(int i=0;i<m;i++) ans = min(ans, dp[n][i]);
    cout<<ans;
}