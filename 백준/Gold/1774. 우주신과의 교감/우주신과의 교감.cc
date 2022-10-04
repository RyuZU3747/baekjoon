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

struct point{
    ll x;
    ll y;
};

vector<tuple<double,ll,ll>> line;//길이, 출발, 도착
ll root[1001];
ll n,m;
point shin[1001];

ll find(ll x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(ll x, ll y){
    ll fx = find(x);
    ll fy = find(y);
    if(fx>fy) root[fx]=root[fy];
    else root[fy]=root[fx];
    return;
}

double len(point a, point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main(){
    for(ll i=0;i<1001;i++){
        root[i]=i;
    }
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        cin>>shin[i].x;
        cin>>shin[i].y;
    }
    for(ll i=0;i<m;i++){
        ll tmpx, tmpy;
        cin>>tmpx>>tmpy;
        Union(tmpx-1,tmpy-1);
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            double l = len(shin[i],shin[j]);
            line.push_back(make_tuple(l,i,j));
            line.push_back(make_tuple(l,j,i));
        }
    }
    double ans = 0;
    sort(line.begin(),line.end());
    for(ll i=0;i<line.size();i++){
        double w = get<0>(line[i]);
        ll from = get<1>(line[i]);
        ll to = get<2>(line[i]);
        if(find(from)!=find(to)){
            Union(from,to);
            ans += w;
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<ans;
}