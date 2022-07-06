#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

struct cut{
    ll sx,sy,ex,ey;
};

ll ccw(ll x1, ll x2, ll x3, ll y1, ll y2, ll y3){
    return x1*y2+x2*y3+x3*y1-(x2*y1+x3*y2+x1*y3);
}

ll check(cut a, cut b){
    ll ret1 = ((ccw(a.sx,a.ex,b.sx,a.sy,a.ey,b.sy)%MOD)*(ccw(a.sx,a.ex,b.ex,a.sy,a.ey,b.ey)%MOD))%MOD;
    ll ret2 = ((ccw(b.sx,b.ex,a.sx,b.sy,b.ey,a.sy)%MOD)*(ccw(b.sx,b.ex,a.ex,b.sy,b.ey,a.ey)%MOD))%MOD;
    if(ret1<0&&ret2<0) return 1;
    return -1;
}

int main(){
	cut c[2];
	cin>>c[0].sx>>c[0].sy>>c[0].ex>>c[0].ey>>c[1].sx>>c[1].sy>>c[1].ex>>c[1].ey;
	if(check(c[0],c[1])==1) cout<<"1";
	else cout<<"0";
}