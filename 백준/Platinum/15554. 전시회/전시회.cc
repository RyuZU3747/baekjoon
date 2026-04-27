#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll pres[500001];

int main(){
    FASTIO;
	int n;cin>>n;
	vector<pair<ll,ll>> arr(n);
	for(auto &x:arr) cin>>x.first>>x.second;
	sort(arr.begin(),arr.end());
	pres[0] = 0;
	for(int i=1;i<=n;i++) pres[i] = pres[i-1] + arr[i-1].second;
	ll ans = 0;
	int left = 0;
	for(int i=1;i<=n;i++){
		if((pres[left] - arr[left].first) > (pres[i-1] - arr[i-1].first)) left = i-1;
		ll tmp = pres[i] - arr[i-1].first - (pres[left] - arr[left].first);
		ans = max(ans, tmp);
	}
	cout<<ans;
}