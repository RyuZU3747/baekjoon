#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[301][301][2];
int n,m;
vector<int> dist;

int recur(int left, int right, int loc, int w){
	if(w==0) return 0;
	if(left > right) return 1234567890;
	int & ret = dp[left][right][loc];
	if(ret != -1) return ret;
	ret = 1234567890;
	if(loc){
		if(right<n) ret = min(ret, recur(left, right+1, 0, w-1) + w*abs(dist[left] - dist[right+1]));
		if(left>0) ret = min(ret, recur(left-1, right, 1, w-1) + w*abs(dist[left] - dist[left-1]));
	}
	else{
		if(right<n) ret = min(ret, recur(left, right+1, 0, w-1) + w*abs(dist[right] - dist[right+1]));
		if(left>0) ret = min(ret, recur(left-1, right, 1, w-1) + w*abs(dist[right] - dist[left-1]));
	}
	return ret;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		dist.push_back(a);
	}
	dist.push_back(0);
	sort(dist.begin(), dist.end());
	int st = lower_bound(dist.begin(), dist.end(), 0) - dist.begin();
	int ans = 0;
	for(int i=0;i<=n;i++){
		memset(dp, -1, sizeof dp);
		ans = max(ans, i*m - recur(st, st, 0, i));
	}
	cout<<ans;
}