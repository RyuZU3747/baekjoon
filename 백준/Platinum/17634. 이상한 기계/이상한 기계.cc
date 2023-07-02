#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll gcd(ll a, ll b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int main(){
	FASTIO;
	ll n,a,b;cin>>n>>a>>b;
	ll p = a/gcd(a,1+b);
	ll ans = 0;
	if(INT_FAST64_MAX / b < p){
		for(int i=0;i<n;i++){
			ll l,r;cin>>l>>r;
			ans += r-l+1;
		}
		cout<<ans;
		return 0;
	}
	p *= b;
	vector<pair<ll,ll>> ran; 
	for(int i=0;i<n;i++){
		ll l,r;cin>>l>>r;
		if(r-l+1>=p){
			cout<<p;
			return 0;
		}
		l %= p;
		r %= p;
		if(l > r){
			ran.push_back({l,p-1});
			ran.push_back({0,r});
		}
		else ran.push_back({l,r});
	}
	sort(ran.begin(),ran.end());
	ll l = -1, r=-1;
	for(ll i=0;i<ran.size();i++){
		if(r < ran[i].first){
			ans += r-l+1;
			l = ran[i].first;
			r = ran[i].second;
		}
		r = max(r, ran[i].second);
	}
	ans += r-l+1;
	cout<<ans-1;

}