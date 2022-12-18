#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a+b+c-max(a,max(b,c))-min(a,min(b,c));
}