#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int q;cin>>q;
    ll cur = 1;
    ll mul = 1;
    while(q--){
        int n;cin>>n;
        if(n==0){
            int a;cin>>a;
            cur += a;
        }
        if(n==1){
            int a;cin>>a;
            cur *= a;
            mul *= a;
        }
        if(n==2){
            int a;cin>>a;
            cur += a*mul;
        }
        if(n==3) cout<<cur<<'\n';
    }
}