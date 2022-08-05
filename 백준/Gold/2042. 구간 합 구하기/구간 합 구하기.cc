#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

ll arr[1000001];
ll tree[4000004];

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

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) cin>>arr[i];//1-index 주의
    make_segtree(1,1,n);
    for(int i=0;i<m+k;i++){
        int t;
        cin>>t;
        if(t==1){
            ll a,b;
            cin>>a>>b;
            change(1,1,n,a,b);
        }
        else{
            ll a,b;
            cin>>a>>b;
            cout<<query(1,1,n,a,b)<<'\n';
        }
    }
}
