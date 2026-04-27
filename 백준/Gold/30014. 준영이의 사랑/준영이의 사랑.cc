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
    for(auto &x:arr)cin>>x;
    sort(arr.begin(),arr.end(),[](int a, int b){return a>b;});
    ll ans = 0;
    int l = arr[0];
    int r = arr[0];
    deque<int> ansar;
    ansar.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(l >= r){
            ans += l * arr[i];
            l = arr[i];
            ansar.push_front(arr[i]);
        }
        else{
            ans += r * arr[i];
            r = arr[i];
            ansar.push_back(arr[i]);
        }
    }
    ans += ansar[0] * ansar[n-1];
    cout<<ans<<'\n';
    for(auto e: ansar) cout<<e<<' ';
}