#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        ll a;cin>>a;
        if(a%2==0) cout<<"cubelover\n";
        else if(a==3) cout<<"koosaga\n";
        else{
            a >>= 2;
            for(;a;a>>=2){
                if(a&1){
                    cout<<"cubelover\n";
                    break;
                }
            }
            if(a==0) cout<<"koosaga\n";
        }
    }
}