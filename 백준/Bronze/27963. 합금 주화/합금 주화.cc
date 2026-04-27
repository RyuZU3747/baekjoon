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
    double d1,d2,x;cin>>d1>>d2>>x;
    cout<<fixed;
    cout.precision(8);
    cout<<100.0/(x/max(d1,d2)+(100-x)/min(d1,d2));
}