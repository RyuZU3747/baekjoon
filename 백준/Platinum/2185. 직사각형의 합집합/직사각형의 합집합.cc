#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll arr[20010];//1-index 주의
ll tree[80004];//4*n
int vis[20010];

ll make_segtree(int node, int left, int right){
	if(left==right) return tree[node] = arr[left];
	else return tree[node] = /*왼쪽*/make_segtree(node*2,left,(left+right)/2) + /*오른쪽*/make_segtree(node*2+1,(left+right)/2+1,right);
}

ll change(int node, int left, int right, ll idx, ll value){
	if(idx<left||right<idx) return tree[node];
	else if(left==right) return tree[node] = value;
	else return tree[node] = /*왼쪽*/change(node*2,left,(left+right)/2,idx,value) + /*오른쪽*/change(node*2+1,(left+right)/2+1,right,idx,value);
}

ll query(int node, int left, int right, ll first, ll second){
	if(second<left||right<first) return 0;
	if(first<=left&&right<=second) return tree[node];
	return /*왼쪽*/query(node*2,left,(left+right)/2,first,second) + /*오른쪽*/query(node*2+1,(left+right)/2+1,right,first,second);
}

vector<pair<int,iii>> yy;
vector<pair<int,iii>> xx;

int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
		if(x1 > x2) swap(x1,x2);
		if(y1 > y2) swap(y1,y2);
		xx.push_back({y1+10000,{x1+10000, x2+10000, 1}});
		xx.push_back({y2+10000,{x1+10000, x2+10000, 0}});
		yy.push_back({x1+10000,{y1+10000, y2+10000, 1}});
		yy.push_back({x2+10000,{y1+10000, y2+10000, 0}});
	}
	sort(xx.begin(),xx.end(),[](pair<int,iii> a, pair<int,iii> b){
		if(a.first < b.first){
			return 1;
		}
		else if(a.first == b.first){
			int t1 = get<2>(a.second);
			int t2 = get<2>(b.second);
			return t1 > t2 ? 1 : 0;
		}
		else{
			return 0;
		}
	});
	sort(yy.begin(),yy.end(),[](pair<int,iii> a, pair<int,iii> b){
		if(a.first < b.first){
			return 1;
		}
		else if(a.first == b.first){
			int t1 = get<2>(a.second);
			int t2 = get<2>(b.second);
			return t1 > t2 ? 1 : 0;
		}
		else{
			return 0;
		}
	});
	ll ans = 0;
	int prev = 0;
	for(auto e: xx){
		int from = get<0>(e.second);
		int to = get<1>(e.second);
		int su = get<2>(e.second);
		if(su){
			for(int i=from;i<to;i++){
				vis[i]++;
				if(vis[i]==1) change(1,0,20000,i,su);
			}
		}
		else{
			for(int i=from;i<to;i++){
				vis[i]--;
				if(vis[i]==0) change(1,0,20000,i,su);
			}
		}
		int cur = tree[1];
		ans += abs(prev-cur);
		prev = cur;
	}
	memset(vis, 0, sizeof vis);
	memset(tree, 0, sizeof tree);
	prev = 0;
	for(auto e: yy){
		int from = get<0>(e.second);
		int to = get<1>(e.second);
		int su = get<2>(e.second);
		if(su == 1){
			for(int i=from;i<to;i++){
				vis[i]++;
				if(vis[i]==1) change(1,0,20000,i,su);
			}
		}
		else{
			for(int i=from;i<to;i++){
				vis[i]--;
				if(vis[i]==0) change(1,0,20000,i,su);
			}
		}
		int cur = tree[1];
		ans += abs(prev-cur);
		prev = cur;
	}
	cout<<ans;
}