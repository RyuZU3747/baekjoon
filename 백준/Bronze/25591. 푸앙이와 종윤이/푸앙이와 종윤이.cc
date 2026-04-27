#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/
 
int main(){
    int a,b,c,d,q,r;
    int x,y;
    cin>>x>>y;
    a = 100-x;
    b = 100-y;
    c = 100-(a+b);
    d = a*b;
    q = d/100;
    r = d%100;
    cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<q<<' '<<r<<'\n';
    cout<<c+q<<' '<<r;
}