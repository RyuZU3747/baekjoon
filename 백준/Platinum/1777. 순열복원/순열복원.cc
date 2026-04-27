#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll arr[1000001];//1-index 주의
ll tree[4000004];//4*n

ll make_segtree(int node, int left, int right){
   if(left==right) return tree[node] = 1;
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

ll ans[100001];

int main(){ 
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    make_segtree(1,1,n);
    for(int i=n;i>=1;i--){
        int curfr = 1 + arr[i];
        int pos = 0;
        int l=1,r=n;

        while(l<=r){
            int mid = (l+r)/2;
            int q = query(1,1,n,mid,n);
            if(q > curfr){
                l = mid+1;
            }
            else if(q == curfr){
                l = mid + 1;
                pos = max(pos, mid);
            }
            else{
                r = mid-1;
            }
        }
        ans[pos] = i;
        change(1,1,n,pos,0);
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
}