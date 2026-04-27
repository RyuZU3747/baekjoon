#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll cnt;

void recur(int n, int l, int dep){
    if(dep == l && n==1){
        cnt++;
        return;
    }
    int st = sqrt(n);
    if(st*st==n) st--;
    for(int nxt = st;nxt>0;nxt--){
        recur(nxt, l, dep+1);
    }
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        int n,l;cin>>n>>l;
        cnt = 0;
        recur(n,l,1);
        cout<<cnt<<'\n';
    }
}