#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

struct cut{
    ll sx,sy,ex,ey;
    ll w;
    ll cnt = 0;
};

int cmp(const void* a, const void *b){
    cut a1 = *(cut*)a;
    cut a2 = *(cut*)b;
    ll t1 = (a1.cnt+1)*a1.w;
    ll t2 = (a2.cnt+1)*a1.w;
    if(a1.w>a2.w) return 1;
    else if(a1.w<a2.w) return -1;
    return 0;
}

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
    vector<pair<ll,ll>> cross;
    ll n;
    ll ans = 0;
    cut c[2510];
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>c[i].sx>>c[i].sy>>c[i].ex>>c[i].ey>>c[i].w;
        ans += c[i].w;
    }
    qsort(c,n,sizeof(cut),cmp);
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(check(c[i],c[j])==1){
                cross.push_back(make_pair(i,j));
            }
        }
    }
    for(auto s: cross){
        ll a = s.first;
        ll b = s.second;
        ans += Min(c[a].w,c[b].w);
    }
    cout<<ans;
}