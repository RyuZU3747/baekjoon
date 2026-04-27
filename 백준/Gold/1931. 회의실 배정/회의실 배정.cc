#include <bits/stdc++.h>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<pair<int,int>> arr(n);
    for(auto &[x,y]: arr) cin>>x>>y;
    sort(arr.begin(), arr.end(),[](pair<int, int> a, pair<int,int> b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });
    int ans = 0;
    int ed = 0;
    for(auto e: arr){
        if(ed <= e.first){
            ans++;
            ed = e.second;
        }
    }
    cout<<ans;
}
