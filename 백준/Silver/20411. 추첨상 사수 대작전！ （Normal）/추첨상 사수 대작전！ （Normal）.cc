#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll m,sed,x1,x2;cin>>m>>sed>>x1>>x2;
    for(int a=0;a<m;a++){
        ll c =(x1 - (a*sed)%m + m )%m;
        if(x2 == (a*x1+c)%m){
            cout<<a<<' '<<c;
            break;
        }
    }
}