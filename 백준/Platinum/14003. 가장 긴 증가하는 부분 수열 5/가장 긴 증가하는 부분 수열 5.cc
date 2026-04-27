#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll tree[4000001];

ll update(ll node, ll left, ll right, ll idx, ll val){
	if(idx<left||idx>right) return tree[node];
	if(left==right) return tree[node] = val;
	return tree[node] = max(update(node*2, left, (left+right)/2, idx, val), update(node*2+1, (left+right)/2 + 1, right, idx, val));
}

ll query(ll node, ll left, ll right, ll l, ll r){
	if(r<left||right<l) return 0;
	if(left>=l&&right<=r) return tree[node];
	return max(query(node*2, left, (left+right)/2, l, r) , query(node*2+1, (left+right)/2 + 1, right, l, r));
}

int main(){
	int n;cin>>n;
	set<pair<int,int>> s;
	map<ll,ll> arr;
	for(int i=1;i<=4000000;i++) tree[i] = -12345678900;
	for(int i=1;i<=n;i++){
		ll a;cin>>a;
		s.insert({a,-i});
		arr[i] = a;
	}
	if(n==1){
		cout<<1<<'\n'<<arr[1];
		return 0;
	}
	for(auto e: s){
		update(1,1,n,-e.second,query(1,1,n,1,-e.second)+1);
	}
	cout<<tree[1]<<'\n';
	int idx = tree[1];
	set<int> ans;
	for(int i=n;i>0;i--){
		if(idx==query(1,1,n,i,i)){
			ans.insert(arr[i]);
			idx--;
		}
	}
	for(auto e: ans) cout<<e<<' ';
}