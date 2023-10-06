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
    int n;cin>>n;
    int su = 2;
    ll sum = 0;
    if(n==2){
        cout<<"2 12";
        return 0;
    }
    for(int i=0;i<n-1;i++){
        cout<<su<<' ';
        sum += su;
        su += 2;
    }
    for(int i=3;i<100000;i+=2){
        if((sum+i) % i == 0){
            cout<<i;
            break;
        }
    }
}