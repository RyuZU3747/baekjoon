#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

struct Point{
    ll x, y; // 실제 위치
    ll p, q; // 기준점으로부터의 상대 위치
    Point(): Point(0, 0, 1, 0){}
    Point(ll x1, ll y1): Point(x1, y1, 1, 0){}
    Point(ll x1, ll y1, ll p1, ll q1): x(x1), y(y1), p(p1), q(q1){}
    // p, q 값을 기준으로 정렬하기 위한 관계연산자
    bool operator <(const Point& O){
        if(1LL*q*O.p != 1LL*p*O.q) return 1LL*q*O.p < 1LL*p*O.q;
        if(y != O.y) return y < O.y;
        return x < O.x;
    }
};

long long ccw(const Point& A, const Point& B, const Point& C){
    ll t = 1LL*(B.x-A.x)*(C.y-A.y) - 1LL*(B.y-A.y)*(C.x-A.x);
    if(t < 0) return -1;
    else if(t > 0) return 1;
    else return 0;
}

long long cccw(Point A, Point B, Point C, Point D){
    D.x -= (C.x-B.x);
    D.y -= (C.y-B.y);
    return ccw(A,B,D);
}

ll dist(Point A, Point B){
    return (A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y);
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        ll n;cin>>n;
        vector<Point> p;
        for(int i=0;i<n;i++){
            ll x,y;cin>>x>>y;
            p.push_back(Point(x,y));
        }
        
        sort(p.begin(),p.end());
        for(int i=1;i<p.size();i++){
            p[i].p = p[i].x - p[0].x;
            p[i].q = p[i].y - p[0].y;
        }
        sort(p.begin()+1, p.end());
        vector<Point> st;
        st.push_back(p[0]);
        st.push_back(p[1]);
        ll cur = 2;
        while(cur < p.size()){
            while(st.size() >= 2){
                auto f = st.back();
                st.pop_back();
                auto s = st.back();
                if(ccw(s,f,p[cur]) > 0){
                    st.push_back(f);
                    break;
                }
            }
            st.push_back(p[cur++]);
        }
        
        ll sz = st.size();
        ll p1 = 1;
        ll len = 0;
        Point ans1, ans2;
        for(int i=0;i<sz;i++){
            while(p1+1!=i && cccw(st[i], st[i+1], st[p1%sz], st[(p1+1)%sz])>0){
                if(len < dist(st[i], st[p1%sz])){
                    ans1 = st[i];
                    ans2 = st[p1%sz];
                    len = dist(st[i], st[p1%sz]);
                }
                p1++;
            }
            if(len < dist(st[i], st[p1%sz])){
                ans1 = st[i];
                ans2 = st[p1%sz];
                len = dist(st[i], st[p1%sz]);
            }
        }
        cout<<ans1.x<<' '<<ans1.y<<' '<<ans2.x<<' '<<ans2.y<<'\n';
    }
}