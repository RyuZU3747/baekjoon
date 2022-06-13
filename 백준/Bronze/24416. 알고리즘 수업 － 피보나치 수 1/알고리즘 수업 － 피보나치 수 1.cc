#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	int dp[41];
	cin>>n;
	dp[1]=1;
	dp[2]=1;
	for(int i=3;i<=n;i++) dp[i] = dp[i-1]+dp[i-2];
	cout<<dp[n]<<' '<<n-2;
}