#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n;
    int arr[200001];
    int dp[200001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dp[i]=1;
    }
    for(int i=n-2;i>=0;i--){
        if(i+arr[i]+1<n) dp[i] = dp[i+arr[i]+1]+1;
    }
    for(int i=0;i<n;i++) cout<<dp[i]<<' ';

}