#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int arr[101];
int block;
int n;

int dp[101][5050][101];

int solve(int idx, int bl, int cur){
    int & ret = dp[idx][bl][cur];
    if(ret!=-1) return ret;
    if(idx==n){
        if(bl==0) return 0;
        else return 123456789;
    }
    if(bl<0) return 123456789;
    if(cur>100||cur<0) return 123456789;
    ret = min(solve(idx+1, bl-cur, cur+1), 
        min(solve(idx+1, bl-cur, cur), 
        solve(idx+1, bl-cur, cur-1))) + abs(arr[idx] - cur); 
    return ret;
}

int main(){
    cin>>n;
    int ans = 123456789;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        block += arr[i];
    }
        memset(dp,-1,sizeof dp);
    for(int i=0;i<101;i++){
        ans = min(ans,solve(0,block,i));
    }
    if(ans==-1) ans = 0;
    cout<<ans/2;
}