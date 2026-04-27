#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string dango[3100];
string tmp[3];
int dp[3100][3];
int ans = 0;

int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<3;i++){
        for(int j=0;j<m;j++) tmp[i] += ' ';
    }
    for(int i=0;i<n;i++) cin>>dango[i];
    for(int i=0;i<n+m-2;i++){
        for(int j=0;j<3;j++) for(int k=0;k<m;k++) tmp[j][k] = ' ';
        for(int j=0;j<3;j++){
            for(int k=0;k<m;k++){
                if(i-k-1+j < 0 || i-k-1+j >= n) continue;
                tmp[j][k] = dango[i-k-1+j][k];
            }
        }
        memset(dp, 0, sizeof dp);
        for(int j=0;j<m;j++){
            for(int k=0;k<3;k++){
                dp[j+1][0] = max(dp[j+1][0], dp[j][k]);
                if(tmp[1][j]!='G') continue;
                if(j>0&&k!=1&&tmp[0][j-1]=='R'&&tmp[2][j+1]=='W') dp[j+1][2] = max(dp[j+1][2], dp[j][k]+1);
                if(k!=2&&tmp[0][j]=='R'&&tmp[2][j]=='W') dp[j+1][1] = max(dp[j+1][1], dp[j][k]+1);
            }
        }
        ans += max(dp[m][0], max(dp[m][1], dp[m][2]));
    }
    cout<<ans;
}