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

ll mntree[400001];
ll arr[100001];

ll make_tree(ll node, ll left, ll right){
	if(left==right) return mntree[node] = arr[left];
	return mntree[node] = make_tree(node*2, left, (left+right)/2) * make_tree(node*2+1, (left+right)/2 + 1, right);
}

ll update(ll node, ll left, ll right, ll idx, ll val){
	if(idx<left||idx>right) return mntree[node];
	if(left==right) return mntree[node] = val;
	return mntree[node] = update(node*2, left, (left+right)/2, idx, val) * update(node*2+1, (left+right)/2 + 1, right, idx, val);
}

ll query(ll node, ll left, ll right, ll l, ll r){
	if(r<left||right<l) return 1;
	if(left>=l&&right<=r) return mntree[node];
	return query(node*2, left, (left+right)/2, l, r) * query(node*2+1, (left+right)/2 + 1, right, l, r);
}

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	ll n,m;
	while(cin>>n>>m){
		for(ll i=1;i<=n;i++){
			int tmp;cin>>tmp;
			tmp = tmp<0 ? -1 : tmp>0 ? 1 : 0;
			arr[i] = tmp;
		}
		make_tree(1,1,n);
		for(ll i=0;i<m;i++){
			char a;int b,c;
			cin>>a>>b>>c;
			if(a=='C'){
				c = c<0 ? -1 : c>0 ? 1 : 0;
				update(1,1,n,b,c);
			}
			else{
				int r = query(1,1,n,b,c);
				cout<<(r<0 ? '-' : r>0 ? '+' : '0');
			}
		}
		cout<<'\n';
	}
}