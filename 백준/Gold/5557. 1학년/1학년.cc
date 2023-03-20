#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n;
ll arr[101];
ll dp[101][21];

ll rec(ll cur, ll su){
	ll & ret = dp[cur][su];
	if(su<0||su>20) return 0;
	if(cur==0&&su==arr[0]) return 1;
	if(cur==0&&su!=arr[0]) return 0;
	if(ret!=-1) return ret;
	return ret = rec(cur-1,su-arr[cur]) + rec(cur-1,su+arr[cur]);
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<101;i++){
		for(int j=0;j<21;j++) dp[i][j] = -1;
	}
	cout<<rec(n-2,arr[n-1]);
}