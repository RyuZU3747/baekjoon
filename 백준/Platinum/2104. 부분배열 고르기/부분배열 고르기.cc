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

ll arr[100001];//1-index 주의
ll mintree[400004];//4*n
ll sumtree[400004];

ll make_sumsegtree(int node, int left, int right){
    if(left==right) return sumtree[node] = arr[left];
    else return sumtree[node] = /*왼쪽*/make_sumsegtree(node*2,left,(left+right)/2) + /*오른쪽*/make_sumsegtree(node*2+1,(left+right)/2+1,right);
}

ll sumquery(int node, int left, int right, ll first, ll second){
    if(second<left||right<first) return 0;
    if(first<=left&&right<=second) return sumtree[node];
    return /*왼쪽*/sumquery(node*2,left,(left+right)/2,first,second) + /*오른쪽*/sumquery(node*2+1,(left+right)/2+1,right,first,second);
}

ll make_minsegtree(int node, int left, int right){
    if(left==right) return mintree[node] = left;
    ll l = make_minsegtree(node*2,left,(left+right)/2);
    ll r = make_minsegtree(node*2+1,(left+right)/2+1,right);
    return mintree[node] = /*왼쪽*/arr[l] < /*오른쪽*/arr[r] ? l : r; 
}

ll minquery(int node, int left, int right, ll first, ll second){
    if(second<left||right<first) return 123456789;
    if(first<=left&&right<=second) return mintree[node];
    ll l = minquery(node*2,left,(left+right)/2,first,second);
    ll r = minquery(node*2+1,(left+right)/2+1,right,first,second);
    if(l==123456789) return r;
    if(r==123456789) return l;
    return arr[l] < arr[r] ? l : r;
}

ll getmax(int len, int left, int right){
    if(left==right) return arr[left]*arr[left];
    ll idx = minquery(1,1,len,left,right);
    ll res = arr[idx] * sumquery(1,1,len,left,right);
    if(left<=idx-1){
        ll tmp = getmax(len,left, idx-1);
        res = max(res,tmp);
    }
    if(right>=idx+1){
        ll tmp = getmax(len,idx+1,right);
        res = max(res,tmp);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    make_sumsegtree(1,1,n);
    make_minsegtree(1,1,n);
    ll ans = getmax(n,1,n);
    cout<<ans;
}