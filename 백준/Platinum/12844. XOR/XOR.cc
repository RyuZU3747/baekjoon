#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll arr[1000001];//1-index 주의
ll tree[4000004];//4*n
ll lazy[4000004];

ll make_segtree(ll node, ll left, ll right){
    if(left==right) return tree[node] = arr[left];
    else return tree[node] = /*왼쪽*/make_segtree(node*2,left,(left+right)/2) ^ /*오른쪽*/make_segtree(node*2+1,(left+right)/2+1,right);
}

void prop(ll node, ll left, ll right){
    if(lazy[node]){
        if((right-left+1)%2) tree[node] ^= lazy[node];
        if(left!=right){
            lazy[node*2] ^= lazy[node];
            lazy[node*2+1] ^= lazy[node];
        }
        lazy[node] = 0;
    }
}

void change(ll node, ll left, ll right, ll l, ll r, ll value){
    if(lazy[node]) prop(node, left, right);

    if(l>right || r<left) return;
    if(l<=left&&right<=r){
        if((right-left+1)%2) tree[node] ^= value;
        if(left!=right){
            lazy[node*2] ^= value;
            lazy[node*2+1] ^= value;
        }
        return;
    }
    /*왼쪽*/change(node*2,left,(left+right)/2,l,r,value);
    /*오른쪽*/change(node*2+1,(left+right)/2+1,right,l,r,value);
    tree[node] = tree[node*2] ^ tree[node*2+1];
}

ll query(ll node, ll left, ll right, ll first, ll second){

    if(lazy[node]) prop(node, left, right);

    if(second<left||right<first) return 0;
    if(first<=left&&right<=second) return tree[node];
    return /*왼쪽*/query(node*2,left,(left+right)/2,first,second) ^ /*오른쪽*/query(node*2+1,(left+right)/2+1,right,first,second);
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++) cin>>arr[i];
    make_segtree(1,1,n);
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int a;cin>>a;
        if(a==1){
            int b,c,d;cin>>b>>c>>d;
            b++;c++;
            change(1,1,n,b,c,d);
        }
        else{
            int b,c;cin>>b>>c;
            b++;c++;
            cout<<query(1,1,n,b,c)<<'\n';
        }
    }
}