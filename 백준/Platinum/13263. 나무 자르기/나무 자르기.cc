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

int main(){
    FASTIO;
    int n;cin>>n;
    vector<ll> A(n);
    vector<ll> B(n);
    for(auto &x:A) cin>>x;
    for(auto &x:B) cin>>x;
    ll dp[100001];
    dp[0] = 0;
    vector<pair<pll,double>> cht;
    for(int i=1;i<n;i++){
        double ns = 0;
        while(!cht.empty()){
            auto [a,s] = cht.back();
            ns = (1.0 * (a.second - dp[i-1])) / (1.0 * (B[i-1] - a.first));
            if(ns > s) break;
            cht.pop_back();
        }
        cht.push_back({{B[i-1], dp[i-1]},ns});

        ll x = A[i];
        int left = 0, right = cht.size()-1;
        int idx = 0;
        while(left<=right){
            int mid = (left+right)/2;
            if(x < cht[mid].second){
                right = mid-1;
            }
            else{
                idx = mid;
                left = mid+1;
            }
        }
        dp[i] = cht[idx].first.first * x + cht[idx].first.second;
    }
    cout<<dp[n-1];
}