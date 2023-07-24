#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    vector<pii> cond(m);
    vector<int> arr;
    for(auto &x: cond) cin>>x.first>>x.second;
    sort(cond.begin(),cond.end(),[](pii a, pii b){
        if(a.first < b.first) return true;
        else if(a.first == b.first){
            return a.second < b.second;
        }
        return false;
    });
    arr.push_back(cond[0].second);
    ll sum[200010];
    sum[0] = 0;
    for(int i=1;i<cond[0].first;i++){
        arr.push_back(0);
        sum[i] = sum[i-1] + arr[i-1];
    }
    sum[cond[0].first] = sum[cond[0].first-1] + arr[cond[0].first-1];

    for(int i=cond[0].first;i<n;i++){
        int mn = 1234567890;
        for(auto j:cond){
            int tmp = sum[i] - sum[max(0,i-j.first+1)];
            mn = min(mn, j.second-tmp);
        }
        arr.push_back(mn);
        sum[i+1] = sum[i] + arr[i];
    }
    for(int i=1;i<=n;i++){
        cout<<sum[i]<<'\n';
    }
}