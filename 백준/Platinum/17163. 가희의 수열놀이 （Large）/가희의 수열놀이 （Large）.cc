#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

const int N = 2e6;  // limit for array size
int n;  // array size
int t[2 * N]; // 0 index
vector<priority_queue<int>> stk(2000001);
vector<ll> arr;

void build() {  // build the tree
    for (int i = n - 1; i > 0; --i) t[i] = min(t[i<<1], t[i<<1|1]);
}

void change(int p, int value) {  // set value at position p
    for (t[p += n] = value; p > 1; p >>= 1) t[p>>1] = min(t[p], t[p^1]);
}

int query(int l, int r) {  // sum on interval [l, r)
    int res = 1234567890;
    for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res = min(res, t[l++]);
        if (r&1) res = min(res, t[--r]);
    }
    return res;
}

int main(){
    FASTIO;
    ll q,mod;cin>>q>>mod;
    if(q<mod){
        for(int i=0;i<q;i++){
            int a,b;cin>>a;
            if(a==3) cout<<-1<<'\n';
            else if(a==1) cin>>b;
        }
        return 0;
    }
    n = mod;
    memset(t,-1,sizeof t);
    for(int i=0;i<q;i++){
        int a;cin>>a;
        if(a==1){
            int b;cin>>b;
            int tmp = b%mod;
            int idx = arr.size();
            stk[tmp].push(idx);
            change(tmp, idx);
            arr.push_back(tmp);
        }
        else if(a==2){
            if(arr.empty()) continue;
            ll bk = arr.back();
            arr.pop_back();
            stk[bk].pop();
            if(stk[bk].size()>0) change(bk,stk[bk].top());
            else change(bk, -1);
        }
        else{
            if(query(0,mod)==-1) cout<<-1<<'\n';
            else cout<<arr.size() - query(0,mod)<<'\n';
        }
    }
}