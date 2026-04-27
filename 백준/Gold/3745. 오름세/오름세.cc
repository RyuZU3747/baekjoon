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

ll make_segtree(int node, int left, int right){
    if(left==right) return tree[node] = arr[left];
    else return tree[node] = max(/*왼쪽*/make_segtree(node*2,left,(left+right)/2) , /*오른쪽*/make_segtree(node*2+1,(left+right)/2+1,right));
}

ll change(int node, int left, int right, ll idx, ll value){
    if(idx<left||right<idx) return tree[node];
    else if(left==right) return tree[node] = value;
    else return tree[node] = max(/*왼쪽*/change(node*2,left,(left+right)/2,idx,value) , /*오른쪽*/change(node*2+1,(left+right)/2+1,right,idx,value));
}

ll query(int node, int left, int right, ll first, ll second){
    if(second<left||right<first) return 0;
    if(first<=left&&right<=second) return tree[node];
    return max(/*왼쪽*/query(node*2,left,(left+right)/2,first,second) , /*오른쪽*/query(node*2+1,(left+right)/2+1,right,first,second));
}

int main(){
    int n;
    while(cin>>n){
        vector<pii> par;
        make_segtree(1,1,n);
        for(int i=0;i<n;i++){
            int x;cin>>x;
            par.push_back({x,i+1});
        }
        sort(par.begin(),par.end(),[](pii a, pii b){
            if(a.first==b.first) return a.second > b.second;
            return a.first < b.first;
            });
        for(auto e:par){
            int mval = query(1,1,n,1,e.second);
            change(1,1,n,e.second,mval+1);
        }
        cout<<tree[1]<<'\n';
    }
}