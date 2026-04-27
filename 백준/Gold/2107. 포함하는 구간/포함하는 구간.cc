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
    int n;cin>>n;
    vector<pii> arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    ll ans = 0;
    for(int i=0;i<n;i++){
        int st = arr[i].first;
        int ed = arr[i].second;
        ll cnt = 0;
        for(int j=i+1;j<n;j++){
            if(arr[j].first > st && arr[j].second < ed) cnt++;
            if(arr[j].first > ed) break;
        }
        ans = max(ans, cnt);
    }
    cout<<ans;
}