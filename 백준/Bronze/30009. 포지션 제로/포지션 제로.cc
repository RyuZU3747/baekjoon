#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int x,y,r;cin>>x>>y>>r;
    int l = x-r, ri = x+r;
    int b = 0, in = 0;
    while(n--){
        int a;cin>>a;
        if(a==l || a==ri) b++;
        if(a>l && a<ri) in++;
    }
    cout<<in<<' '<<b;
}