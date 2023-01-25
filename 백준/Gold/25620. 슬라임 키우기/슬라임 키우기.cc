#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,q;cin>>n>>q;
    priority_queue<ll> calc;
    priority_queue<ll> tmp;
    priority_queue<ll> ans;
    vector<pair<ll,ll>> yak;
    for(int i=0;i<n;i++){
        ll tmp;
        cin>>tmp;
        if(tmp==0) ans.push(-tmp);
        else calc.push(tmp);
    }
    for(int i=0;i<q;i++){
        ll a,b;
        cin>>a>>b;
        yak.push_back({a,b});
    }
    for(auto e: yak){
        ll x = e.first;
        ll y = e.second;
        int sz = calc.size();
        for(int j=0;j<sz;j++){
            ll c = calc.top();
            calc.pop();
            if(c<=x) c *= y;
            if(c<=1000000000&&c>0) tmp.push(c);
            else ans.push(-c);
        }
        while(!tmp.empty()){
            calc.push(tmp.top());
            tmp.pop();
        }
    }
    while(!calc.empty()){
        ans.push(-calc.top());
        calc.pop();
    }
    while(!ans.empty()){
        cout<<-ans.top()<<' ';
        ans.pop();
    }
}