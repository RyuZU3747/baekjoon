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
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    vector<int> dif = arr;
    sort(arr.begin(),arr.end());
    int ans = 0;
    int idx = n-1;
    for(int i=n-1;i>=0;i--){
        if(dif[i]==arr[idx]){
            ans++;
            idx--;
        }
    }
    cout<<n-ans;
}