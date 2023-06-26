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
	int n;cin>>n;
	ll ans = 1;
	while(n>4){
		ans *= 3;
		if(ans > 10007) ans %= 10007;
		n-=3;
	}
	if(n==4) ans *= 4;
	else if(n==3) ans *= 3;
	else if(n==2) ans *= 2;
	else if(n==0) ans = 0;
	cout<<ans % 10007;
}