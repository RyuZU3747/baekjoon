#include <bits/stdc++.h>
#define ll long long
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

ll state[1000001];
ll t,n;

ll getSum(ll n){
	ll ret = 0;
	if(n==1) return 0;
	ret+=1;
	for(ll i=2;i*i<=n;i++){
		if(n%i==0){
			if(i*i==n) ret+=i;
			else ret+=(i+n/i);
		}
	}
	return ret;
}

void getState(ll n){
	ll sum = getSum(n);
	if(sum>n)
		state[n]=1;
	else if(sum<n)
		state[n]=2;
	else state[n]=3;
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--){
		cin>>n;
		if(state[n]==0)
			getState(n);

		switch(state[n]){
			case 1:
				cout<<"abundant"<<'\n';
				break;
			case 2:
				cout<<"deficient"<<'\n';
				break;
			case 3:
				cout<<"perfect"<<'\n';
				break;
		}
	}
}