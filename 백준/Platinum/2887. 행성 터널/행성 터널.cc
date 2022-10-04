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


ll root[100001];
ll n,m;
vector<pii> x;
vector<pii> y;
vector<pii> z;
vector<iii> line;//w from to

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


int main(){
    for(ll i=0;i<100001;i++){
        root[i]=i;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int tx, ty, tz;
        cin>>tx>>ty>>tz;
        x.push_back(make_pair(tx,i));
        y.push_back(make_pair(ty,i));
        z.push_back(make_pair(tz,i));
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    sort(z.begin(),z.end());

    for(int i=1;i<n;i++){
        line.push_back(make_tuple(abs(x[i].first - x[i-1].first),x[i].second,x[i-1].second));
        line.push_back(make_tuple(abs(y[i].first - y[i-1].first),y[i].second,y[i-1].second));
        line.push_back(make_tuple(abs(z[i].first - z[i-1].first),z[i].second,z[i-1].second));
    }
    sort(line.begin(),line.end());
    ll ans = 0;
    for(int i=0;i<line.size();i++){
        int w = get<0>(line[i]);
        int from = get<1>(line[i]);
        int to = get<2>(line[i]);
        if(find(from)!=find(to)){
            Union(from,to);
            ans += w;
        }
    }
    cout<<ans;
}