#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<ll> h;
ll n;

ll solve(ll l, ll r){
	if(l==r) return h[l];
	ll mid = (l+r)/2;
	ll ret = min(h[mid],h[mid+1])*2;
	ll curmin = min(h[mid], h[mid+1]);
	ll curl = mid - 1;
	ll curr = mid + 2;
	ll sz = 2;
	while(curl >= l && curr <= r){
		sz++;
		if(h[curl] > h[curr]){
			curmin = min(curmin, h[curl--]);
			ret = max(ret, curmin*sz);
		}
		else{
			curmin = min(curmin, h[curr++]);
			ret = max(ret, curmin*sz);
		}
	}
	while(curr <= r){
		sz++;
		curmin = min(curmin, h[curr++]);
		ret = max(ret, curmin*sz);
	}
	while(curl >= l){
		sz++;
		curmin = min(curmin, h[curl--]);
		ret = max(ret, curmin*sz);
	}
	ret = max(ret, solve(l,mid));
	ret = max(ret, solve(mid+1,r));
	return ret;
}

int main(){
	cin>>n;
	for(ll i=0;i<n;i++){
        ll a;cin>>a;
        h.push_back(a);
	}
    cout<<solve(0,n);
}