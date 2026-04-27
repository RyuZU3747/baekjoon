#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int dp[2][10001];

int main(){
    int n;cin>>n;
    int pow[10001];
    for(int i=2;i<=n;i++){
        cin>>pow[i];
    }
    for(int i=2;i<=n;i++){
        for(int j=i;j>1;j--){
            dp[i%2][j] = min(dp[(i%2)^1][j-1], dp[(i%2)^1][i-j]+pow[i]);
        }
        dp[i%2][1] = pow[i];
    }
    
    cout<<dp[0][n/2];
}