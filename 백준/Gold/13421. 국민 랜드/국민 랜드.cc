#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


pair<ll,ll> f(vector<pair<ll,ll>> &v) {
    vector<ll> t;
    t.push_back(v[0].first), t.push_back(v[0].second);
    t.push_back(-v[1].first), t.push_back(v[1].second);
    t.push_back(-v[2].first), t.push_back(-v[2].second);
    t.push_back(v[3].first), t.push_back(-v[3].second);
    
    sort(t.begin(), t.end());

    pair<ll,ll> ret={0,t[4]};
    for (int i=0; i<8; i++) ret.first+=1ll*abs(t[4]-t[i]);

    return ret;
}

int main(){
    FASTIO;

    vector<pair<ll,ll>> a(4);
    bool alz=1;
    for (int i=0; i<4; i++) {
        cin>>a[i].first>>a[i].second;
        if (a[i].first!=0 && a[i].second!=0) alz=0;
    }

    if (alz) {
        cout<<1;
        return 0;
    }

    vector<int> pr={0,1,2,3};
    pair<ll,ll> ans={INT64_MAX,0};

    do {
        vector<pair<ll,ll>> t;
        for (int i=0; i<4; i++) {
            t.push_back(a[pr[i]]);
        }

        pair<ll,ll> ret=f(t);

        if (ans.first>ret.first) ans=ret;
        else if (ans.first==ret.first) ans=max(ans, ret);

    } while (next_permutation(pr.begin(), pr.end()));

    cout<<ans.second*2ll;
    return 0;
}