#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(a>=3&&b<=4) cout<<"TroyMartian\n";
    if(a<=6&&b>=2) cout<<"VladSaturnian\n";
    if(a<=2&&b<=3) cout<<"GraemeMercurian\n";
}