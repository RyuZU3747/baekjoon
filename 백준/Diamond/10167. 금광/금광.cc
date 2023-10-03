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

Node tree[4000004];//4*n

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
    if(second<left||right<first) return {-123456789, -123456789, -123456789, -123456789};
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
    int n;cin>>n;
    vector<array<int,3>> gold;
    vector<pii> cmpx;
    vector<pii> cmpy;
    for(int i=0;i<n;i++){
        int a,b,c;cin>>a>>b>>c;
        gold.push_back({a,b,c});
        cmpx.push_back({a,i});
        cmpy.push_back({b,i});
    }
    sort(cmpx.begin(), cmpx.end());
    sort(cmpy.begin(), cmpy.end());
    int nx = 1, ny = 1;
    gold[cmpx[0].second][0] = 1;
    gold[cmpy[0].second][1] = 1;
    for(int i=1;i<n;i++){
        if(cmpx[i-1].first != cmpx[i].first) gold[cmpx[i].second][0] = ++nx;
        else gold[cmpx[i].second][0] = nx;

        if(cmpy[i-1].first != cmpy[i].first) gold[cmpy[i].second][1] = ++ny;
        else gold[cmpy[i].second][1] = ny;
    }

    vector<pii> ytox[3001];

    for(int i=0;i<n;i++){
        ytox[gold[i][1]].push_back({gold[i][0], gold[i][2]});
    }

    ll ans = 0;

    for(int sy = 1; sy<=ny;sy++){
        memset(tree, 0, sizeof tree);
        for(int ey = sy; ey<=ny;ey++){
            for(auto e: ytox[ey]) change(1,1,n,e.first,e.second);
            Node q = query(1,1,n,1,n);
            ans = max(ans, query(1,1,n,1,n).psum);
        }
    }
    cout<<ans;
}