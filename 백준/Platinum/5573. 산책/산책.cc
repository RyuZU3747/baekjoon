#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int mp[1001][1001];
int h,w,n;
int dp[1001][1001];
int main(){
    FASTIO;
    cin>>h>>w>>n;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) cin>>mp[i][j];
    }
    dp[0][0] = n-1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(mp[i][j]==1){//오른쪽
                if(dp[i][j]%2){//홀수(오른쪽하나더)
                    dp[i][j+1] += dp[i][j]/2+1;
                    dp[i+1][j] += dp[i][j]/2;
                }
                else{
                    dp[i][j+1] += dp[i][j]/2;
                    dp[i+1][j] += dp[i][j]/2;
                }
            }
            else{//아래쪽
                if(dp[i][j]%2){//홀수(아래쪽하나더)
                    dp[i][j+1] += dp[i][j]/2;
                    dp[i+1][j] += dp[i][j]/2+1;
                }
                else{
                    dp[i][j+1] += dp[i][j]/2;
                    dp[i+1][j] += dp[i][j]/2;
                }
            }
        }
    }
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(dp[i][j]%2){//바뀜
                mp[i][j]++;
                mp[i][j]%=2;                
            }
        }
    }
    int r=0,c=0;
    while(r<h&&c<w){
        if(mp[r][c]==1) c++;
        else r++;
    }
    cout<<r+1<<' '<<c+1;
}