#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    vector<pii> arr(1000001);
    for(int i=0;i<n;i++){
        cin>>arr[i].second>>arr[i].first;
    }
    sort(arr.begin(),arr.begin()+n,[](auto a, auto b){return a.first>b.first;});
    int ans = arr[0].first-arr[0].second;
    for(int i=1;i<n;i++){
        if(ans<=arr[i].first){
            ans-=arr[i].second;
        }
        else ans = arr[i].first-arr[i].second;
    }
    cout<<ans;
}