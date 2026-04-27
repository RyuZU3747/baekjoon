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
    vector<pll> arr(n);
    ll s = 0;
    for(auto &x:arr){
        cin>>x.first>>x.second;
        s += x.second;
    }
    sort(arr.begin(), arr.end());
    ll p = 0;
    for(int i=0;i<n;i++){
        p += arr[i].second;
        if(p*2 >= s){
            cout<<arr[i].first;
            return 0;
        }
    }
}