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

ll mxtree[400001];
ll mntree[400001];
ll arr[100001];

ll mx_make_tree(ll node, ll left, ll right){
	if(left==right) return mxtree[node] = left;
	return mxtree[node] = max(mx_make_tree(node*2, left, (left+right)/2), mx_make_tree(node*2+1, (left+right)/2 + 1, right));
}

ll mx_update(ll node, ll left, ll right, ll idx, ll val){
	if(idx<left||idx>right) return mxtree[node];
	if(left==right) return mxtree[node] = val;
	return mxtree[node] = max(mx_update(node*2, left, (left+right)/2, idx, val), mx_update(node*2+1, (left+right)/2 + 1, right, idx, val));
}

ll mx_query(ll node, ll left, ll right, ll l, ll r){
	if(r<left||right<l) return -1;
	if(left>=l&&right<=r) return mxtree[node];
	return max(mx_query(node*2, left, (left+right)/2, l, r), mx_query(node*2+1, (left+right)/2 + 1, right, l, r));
}

ll mn_make_tree(ll node, ll left, ll right){
	if(left==right) return mntree[node] = left;
	return mntree[node] = min(mn_make_tree(node*2, left, (left+right)/2), mn_make_tree(node*2+1, (left+right)/2 + 1, right));
}

ll mn_update(ll node, ll left, ll right, ll idx, ll val){
	if(idx<left||idx>right) return mntree[node];
	if(left==right) return mntree[node] = val;
	return mntree[node] = min(mn_update(node*2, left, (left+right)/2, idx, val), mn_update(node*2+1, (left+right)/2 + 1, right, idx, val));
}

ll mn_query(ll node, ll left, ll right, ll l, ll r){
	if(r<left||right<l) return 1234567891;
	if(left>=l&&right<=r) return mntree[node];
	return min(mn_query(node*2, left, (left+right)/2, l, r), mn_query(node*2+1, (left+right)/2 + 1, right, l, r));
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int t;cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		for(int i=0;i<=n;i++) arr[i] = i;
		mx_make_tree(1,1,n);
		mn_make_tree(1,1,n);
		for(ll i=0;i<m;i++){
			ll q,a,b;cin>>q>>a>>b;
			if(q==1){
				cout<<((mn_query(1,1,n,a+1,b+1)==a+1&&mx_query(1,1,n,a+1,b+1)==b+1) ? "YES" : "NO")<<'\n';
			}
			else{
				mn_update(1,1,n,a+1,arr[b+1]);
				mn_update(1,1,n,b+1,arr[a+1]);
				mx_update(1,1,n,a+1,arr[b+1]);
				mx_update(1,1,n,b+1,arr[a+1]);
				swap(arr[a+1],arr[b+1]);
			}
		}
	}
}