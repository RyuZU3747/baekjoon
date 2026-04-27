#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int x1,y1,r1,x2,y2,r2;cin>>x1>>y1>>r1>>x2>>y2>>r2;
        ll len = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        if(len == 0 && r1==r2) cout<<-1<<'\n';
        else if(len == 0 && r1!=r2) cout<<0<<'\n';
        else if(len > (r1+r2)*(r1+r2) || len < (r1-r2)*(r1-r2)) cout<<0<<'\n';
        else if(len == (r1+r2)*(r1+r2) || len == (r1-r2)*(r1-r2)) cout<<1<<'\n';
        else cout<<2<<'\n';
    }
}