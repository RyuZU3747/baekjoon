#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    if(m>=10) cout<<"TOO LATE";
    else if(m==9){
        if(d>=17) cout<<"TOO LATE";
        else cout<<"GOOD";
    }
    else cout<<"GOOD";
}