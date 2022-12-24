#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a,b,c;cin>>a>>b>>c;
    int ans = 250;
    int h = b;
    while(b<a){
        b+=c;
        ans+=100;
    }
    cout<<ans;
}