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
    ll n;
    cin>>n;
    ll sx,sy,ex,ey;
    cin>>sx>>sy>>ex>>ey;
    ll  oem = 0;
    ll  mn = 123456789123456789;
    for(ll  j=1;j<=n;j++){
        ll  t;
        cin>>t;
        ll  ans = 0;
        ll  bx,by;
        cin>>bx>>by;
        ans += abs(sx-bx)+abs(sy-by);
        for(ll  i=1;i<t;i++){
            ll  cx,cy;
            cin>>cx>>cy;
            ans += abs(bx-cx)+abs(by-cy);
            bx=cx;
            by=cy;
        }
        ans += abs(bx-ex)+abs(by-ey);
        if(ans<mn){
            oem = j;
            mn = ans;
        }
    }
    cout<<oem;
}