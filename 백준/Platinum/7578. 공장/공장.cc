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

ll tree[2000001];
ll arr[1000001];

ll make_tree(ll node, ll left, ll right){
	if(left==right) return tree[node] = 0;
	return tree[node] = make_tree(node*2, left, (left+right)/2) + make_tree(node*2+1, (left+right)/2 + 1, right);
}

ll update(ll node, ll left, ll right, ll idx, ll val){
	if(idx<left||idx>right) return tree[node];
	if(left==right) return tree[node] = val;
	return tree[node] = update(node*2, left, (left+right)/2, idx, val) + update(node*2+1, (left+right)/2 + 1, right, idx, val);
}

ll query(ll node, ll left, ll right, ll l, ll r){
	if(r<left||right<l) return 0;
	if(left>=l&&right<=r) return tree[node];
	return query(node*2, left, (left+right)/2, l, r) + query(node*2+1, (left+right)/2 + 1, right, l, r);
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	ll n;
	cin>>n;
	ll newarr[500001];
	for(ll i=1;i<=n;i++){
		int tmp;cin>>tmp;
		arr[tmp] = i;
	}
	for(ll i=1;i<=n;i++){
		int tmp;cin>>tmp;
		newarr[i] = arr[tmp];
	}
	ll ans = 0;
	make_tree(1,1,n);
	for(int i=1;i<=n;i++){
		ans += query(1,1,n,newarr[i]+1,n);
		update(1,1,n,newarr[i],1);
	}
	cout<<ans;
}