#include <bits/stdc++.h>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,k;
    cin>>n>>k;
    vector<int> coin(n);
    for(auto &x: coin) cin>>x;
    reverse(coin.begin(), coin.end());
    int cur = 0;
    int ans = 0;
    while(k){
        if(coin[cur] <= k){
            k -= coin[cur];
            ans++;
        }
        else cur++;
    }
    cout<<ans;
}