#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
	int t = 1;
	while(1){
		int n;cin>>n;
		if(n==0) break;
		cout<<"Case "<<t++<<":\n";
		vector<pii> house;
		for(int i=0;i<n;i++){
			int a,b;cin>>a>>b;
			house.push_back({a,b});
		}
		pii a, b;cin>>a.first>>a.second>>b.first>>b.second;
		vector<ll> froma;
		vector<ll> fromb;
		for(int i=0;i<n;i++){
			froma.push_back((house[i].first - a.first) * (house[i].first - a.first) + (house[i].second - a.second) * (house[i].second - a.second));
			fromb.push_back((house[i].first - b.first) * (house[i].first - b.first) + (house[i].second - b.second) * (house[i].second - b.second));
		}
		sort(froma.begin(),froma.end());
		sort(fromb.begin(),fromb.end());
		int q;cin>>q;
		for(int i=1;i<=q;i++){
			ll r1,r2;cin>>r1>>r2;
			r1 *= r1;
			r2 *= r2;
			int asu = upper_bound(froma.begin(),froma.end(),r1) - froma.begin();
			int bsu = upper_bound(fromb.begin(),fromb.end(),r2) - fromb.begin();
			cout<<max(0,n-asu-bsu)<<'\n';
		}
	}
}