#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n,k,x;cin>>n>>k>>x;
    if(x==1) n--;
    else if(x==2||x==3) n-=2;
    else if(x==4||x==5||x==6||x==7) n-=3;
    else n-=4;
    cout<<(n+1)-3*(k-1) + (x==4||x==8||x==9);
}