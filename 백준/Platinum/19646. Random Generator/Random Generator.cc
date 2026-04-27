#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

ll arr[1000001];//1-index 주의
ll tree[4000004];//4*n

ll make_segtree(int node, int left, int right){
    if(left==right) return tree[node] = arr[left];
    else return tree[node] = /*왼쪽*/make_segtree(node*2,left,(left+right)/2) + /*오른쪽*/make_segtree(node*2+1,(left+right)/2+1,right);
}

ll change(int node, int left, int right, ll idx){
    if(idx<left||right<idx) return tree[node];
    else if(left==right) return tree[node] = 0;
    else return tree[node] = /*왼쪽*/change(node*2,left,(left+right)/2,idx) + /*오른쪽*/change(node*2+1,(left+right)/2+1,right,idx);
}

ll query(int node, int left, int right, ll value){
    if(left==right) return left;
    if(tree[node*2] < value) return /*오른쪽*/query(node*2+1,(left+right)/2+1,right,value-tree[node*2]);
    return /*왼쪽*/query(node*2,left,(left+right)/2,value);
    
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    make_segtree(1,1,n);
    for(int i=1;i<=n;i++){
        ll a;cin>>a;
        ll x = query(1,1,n,a);
        cout<<x<<' ';
        change(1,1,n,x);
    }
}