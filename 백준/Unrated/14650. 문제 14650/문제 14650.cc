#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n;
ll ans = 0;
vector<int> su;
void recur(int idx){
    if(idx==n){
        int sum = 0;
        for(auto e: su) sum += e;
        if(sum%3==0) ans++;
        return;
    }
    if(idx!=0){
        su.push_back(0);
        recur(idx+1);
        su.pop_back();
    }
    su.push_back(1);
    recur(idx+1);
    su.pop_back();        
    su.push_back(2);
    recur(idx+1);
    su.pop_back();
}

int main(){
    FASTIO;
    cin>>n;
    recur(0);
    cout<<ans;
}