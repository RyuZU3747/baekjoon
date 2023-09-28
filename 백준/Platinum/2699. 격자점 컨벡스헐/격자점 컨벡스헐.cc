#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

struct Point{
    int x, y; // 실제 위치
    int p, q; // 기준점으로부터의 상대 위치
    Point(): Point(0, 0, 1, 0){}
    Point(int x1, int y1): Point(x1, y1, 1, 0){}
    Point(int x1, int y1, int p1, int q1): x(x1), y(y1), p(p1), q(q1){}
    // p, q 값을 기준으로 정렬하기 위한 관계연산자
    bool operator <(const Point& O){
        if(1LL*q*O.p != 1LL*p*O.q) return 1LL*q*O.p < 1LL*p*O.q;
        if(y != O.y) return y > O.y;
        return x < O.x;
    }
};

long long ccw(const Point& A, const Point& B, const Point& C){
    ll t = 1LL*(B.x-A.x)*(C.y-A.y) - 1LL*(B.y-A.y)*(C.x-A.x);
    if(t < 0) return -1;
    else if(t > 0) return 1;
    else return 0;
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        int n;cin>>n;
        vector<Point> p;
        for(int i=0;i<n;i++){
            int x,y;cin>>x>>y;
            p.push_back(Point(x,y));
        }
        
        sort(p.begin(),p.end());
        for(int i=1;i<p.size();i++){
            p[i].p = p[i].x - p[0].x;
            p[i].q = p[i].y - p[0].y;
        }
        sort(p.begin()+1, p.end());
        vector<int> st;
        st.push_back(0);
        st.push_back(1);
        int cur = 2;
        while(cur < p.size()){
            while(st.size() >= 2){
                int f = st.back();
                st.pop_back();
                int s = st.back();
                if(ccw(p[s],p[f],p[cur]) > 0){
                    st.push_back(f);
                    break;
                }
            }
            st.push_back(cur++);
        }
        cout<<st.size()<<'\n';
        vector<Point> ans;
        for(auto e: st) ans.push_back(p[e]);
        reverse(ans.begin()+1, ans.end());
        for(auto e:ans) cout<<e.x<<' '<<e.y<<'\n';
    }
}