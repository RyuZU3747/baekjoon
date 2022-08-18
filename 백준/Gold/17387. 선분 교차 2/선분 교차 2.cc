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

struct line{
    double sx,sy,ex,ey;
};

double ccw(double x1, double x2, double x3, double y1, double y2, double y3){
    return x1*y2+x2*y3+x3*y1-(x2*y1+x3*y2+x1*y3);
}

int check(line a, line b){
    double ret1 = ((ccw(a.sx,a.ex,b.sx,a.sy,a.ey,b.sy))*(ccw(a.sx,a.ex,b.ex,a.sy,a.ey,b.ey)));
    double ret2 = ((ccw(b.sx,b.ex,a.sx,b.sy,b.ey,a.sy))*(ccw(b.sx,b.ex,a.ex,b.sy,b.ey,a.ey)));
    if(ret1<0&&ret2<0) return 1;
    
    if(ccw(a.sx,a.ex,b.sx,a.sy,a.ey,b.sy)==0){
        if(min(a.sx,a.ex)<=b.sx&&b.sx<=max(a.ex,a.sx)){
            if(min(a.sy,a.ey)<=b.sy&&b.sy<=max(a.ey,a.sy)) return 1;
        }
    }
    if(ccw(a.sx,a.ex,b.ex,a.sy,a.ey,b.ey)==0){
        if(min(a.sx,a.ex)<=b.ex&&b.ex<=max(a.ex,a.sx)){
            if(min(a.sy,a.ey)<=b.ey&&b.ey<=max(a.ey,a.sy)) return 1;
        }
    }
    if(ccw(b.sx,b.ex,a.sx,b.sy,b.ey,a.sy)==0){
        if(min(b.sx,b.ex)<=a.sx&&a.sx<=max(b.sx,b.ex)){
            if(min(b.sy,b.ey)<=a.sy&&a.sy<=max(b.sy,b.ey)) return 1;
        }
    }
    if(ccw(b.sx,b.ex,a.ex,b.sy,b.ey,a.ey)==0){
        if(min(b.sx,b.ex)<=a.ex&&a.ex<=max(b.sx,b.ex)){
            if(min(b.sy,b.ey)<=a.ey&&a.ey<=max(b.sy,b.ey)) return 1;
        }
    }
    return -1;
}

int main(){
    line l1, l2;
    cin>>l1.sx>>l1.sy>>l1.ex>>l1.ey;
    cin>>l2.sx>>l2.sy>>l2.ex>>l2.ey;
    if(check(l1,l2)==1) cout<<1;
    else cout<<0;
}