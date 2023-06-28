#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
	int t;cin>>t;
	while(t--){
		ll a,b;cin>>a>>b;
		ll ans = 1234567890123456789;
		for(ll i=0;i<64;i++){
			if(b>>i){
				ll cnt = 0;
				ll tmp = a;
				while(tmp > (b>>i)){
					if(tmp&1){
						tmp++;
						cnt++;
					}
					cnt++;
					tmp >>= 1;
				}
				cnt += (b>>i) - tmp;
				cnt += i;
				for(int j=0;j<i;j++) if((b>>j)&1) cnt++;
				ans = min(ans, cnt);
			}
		}
		cout<<ans<<'\n';
	}
}