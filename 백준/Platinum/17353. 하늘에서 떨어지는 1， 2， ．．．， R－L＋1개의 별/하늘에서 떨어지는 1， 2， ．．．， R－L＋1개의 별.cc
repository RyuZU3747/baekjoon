#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll arr[1000001];//1-index 주의
ll tree[4000004];//4*n
ll lazy[4000004];
ll cnt[4000004];

void make_segtree(ll node, ll left, ll right){
    if(left==right){
        tree[node] = arr[left];
        return;
    }
    /*왼쪽*/make_segtree(node*2,left,(left+right)/2);
    /*오른쪽*/make_segtree(node*2+1,(left+right)/2+1,right);
}

void change(ll node, ll left, ll right, ll l, ll r){
    if(l>right || r<left) return;
    if(l<=left&&right<=r){
        tree[node] += left - l + 1;
        cnt[node]++;
        return;
    }
    /*왼쪽*/change(node*2,left,(left+right)/2,l,r);
    /*오른쪽*/change(node*2+1,(left+right)/2+1,right,l,r);
}

ll query(ll node, ll left, ll right, ll index){
    if(index<left||right<index) return 0;
    if(index<=left&&right<=index) return tree[node];
    return /*왼쪽*/query(node*2,left,(left+right)/2,index) + /*오른쪽*/query(node*2+1,(left+right)/2+1,right,index) + tree[node] + cnt[node] * (index - left);
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    make_segtree(1,1,n);
    int q;cin>>q;
    while(q--){
        int a;cin>>a;
        if(a==1){
            ll b,c;cin>>b>>c;
            change(1,1,n,b,c);
        }
        else{
            ll b;cin>>b;
            cout<<query(1,1,n,b)<<'\n';
        }
    }
}