#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &x: arr) cin>>x;
    int dp[301][301];
    memset(dp, 0, sizeof dp);
    for(int i=0;i<n;i++){
        dp[i][i] = arr[i];
    }
            for(int k=1;k<n;k++){
    for(int i=0;i<n-k;i++){
        for(int j=i;j<i+k;j++){
                if(dp[i][j] == dp[j+1][i+k] && dp[i][j] != 0){
                    dp[i][i+k] = max(dp[i][i+k], dp[i][j]+1);
                }
            }
        }
    }
    int mx = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            mx = max(mx, dp[i][j]);
        }
    }
    cout<<mx;
}