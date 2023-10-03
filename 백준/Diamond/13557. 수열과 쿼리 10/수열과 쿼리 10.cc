#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

struct Node{
    ll lsum = 0;
    ll rsum = 0;
    ll asum = 0;
    ll psum = 0;
};

Node tree[400004];//4*n

void change(int node, int left, int right, ll idx, ll value){
    if(idx<left||right<idx) return;
    tree[node].lsum += value;
    tree[node].rsum += value;
    tree[node].asum += value;
    tree[node].psum += value;
    if(left==right) return;
    /*왼쪽*/change(node*2,left,(left+right)/2,idx,value);
    /*오른쪽*/change(node*2+1,(left+right)/2+1,right,idx,value);
    tree[node] = {
        max(tree[node*2].lsum, tree[node*2].asum + tree[node*2+1].lsum),
        max(tree[node*2].rsum + tree[node*2+1].asum, tree[node*2+1].rsum),
        tree[node*2].asum + tree[node*2+1].asum,
        max(max(tree[node*2].psum, tree[node*2+1].psum), tree[node*2].rsum + tree[node*2+1].lsum)
    };
}

Node query(int node, int left, int right, ll first, ll second){
    if(second<left||right<first) return {-123456789,-123456789,0,-123456789};
    if(first<=left&&right<=second) return tree[node];
    Node lchild = /*왼쪽*/query(node*2,left,(left+right)/2,first,second);
    Node rchild = /*오른쪽*/query(node*2+1,(left+right)/2+1,right,first,second);
    return {
        max(lchild.lsum, lchild.asum + rchild.lsum),
        max(lchild.rsum + rchild.asum, rchild.rsum),
        lchild.asum + rchild.asum,
        max(max(lchild.psum, rchild.psum), lchild.rsum + rchild.lsum)
    };
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int a;cin>>a;
        change(1,1,n,i,a);
    }
    int q;cin>>q;
    while(q--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        ll ret = -1234567890;
        if(b<c){
            Node left = query(1,1,n,a,b);
            Node mid = query(1,1,n,b+1,c-1);
            Node right = query(1,1,n,c,d);
            ret = left.rsum + mid.asum + right.lsum;
        }
        else{
            Node left = query(1,1,n,a,c-1);
            Node mid = query(1,1,n,c,b);
            Node right = query(1,1,n,b+1,d);
            ret = left.rsum + mid.lsum;
            ret = max(ret, mid.psum);
            ret = max(ret, mid.rsum + right.lsum);
            ret = max(ret, left.rsum + mid.asum + right.lsum);
        }
        cout<<ret<<'\n';
    }
}