#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

ll dist[501];
vector<iii> edge;//from to w

int main(){
    ll v, e;cin>>v>>e;
    for(ll i=0;i<e;i++){
        ll a,b,c;cin>>a>>b>>c;
        edge.push_back(make_tuple(a,b,c));
    }
    for(ll i=0;i<501;i++) dist[i] = 123456789;
    dist[1] = 0;
    ll flag = 0;
    for(ll i=0;i<v;i++){
        for(auto x: edge){
            ll from = get<0>(x);
            ll to = get<1>(x);
            ll w = get<2>(x);
            if(dist[from] != 123456789&&dist[to] > dist[from] + w){
                dist[to] = dist[from] + w;
                if(i==v-1) flag = 1;
            }
        }
    }
    if(flag) cout<<-1;
    else{
        for(ll i=2;i<=v;i++){
            cout<<(dist[i]==123456789 ? -1 : dist[i])<<'\n';
        }
    }
}