#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<pair<int, int>> arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    int l = 0, r = 1e9;
    int ans = 1234567890;
    while(l<=r){
        int mid = (l+r) / 2;
        int cnt = 0;
        for(auto e: arr) if(e.first + mid >= e.second) cnt++;
        if(cnt >= k){
            r = mid-1;
            ans = min(ans, mid);
        }
        else l = mid+1;
    }
    cout<<ans;
}