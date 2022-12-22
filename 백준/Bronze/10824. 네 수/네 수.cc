#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string a, b, c, d;cin>>a>>b>>c>>d;
    ll ai = stoi(a);
    for(int i=0;i<b.length();i++) ai *= 10;
    ll e = ai+stoi(b);
    ll ci = stoi(c);
    for(int i=0;i<d.length();i++) ci *= 10;
    ll f = ci+stoi(d);
    cout<<e+f;
}