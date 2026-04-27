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
    int n,k;cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        arr.push_back(a);
    }
    vector<int> minarr(n);
    vector<int> minarr2(n);
    minarr[0] = arr[0] - 0;
    minarr2[n-1] = arr[n-1] + k*(n-1);
    for(int i=1;i<n;i++){
        minarr[i] = min(minarr[i-1], arr[i] - k*i);
    }
    for(int i=n-2;i>=0;i--){
        minarr2[i] = min(minarr2[i+1], arr[i] + k*i);
    }
    int ans = -1234567890;
    for(int i=1;i<n;i++){
        ans = max(ans, arr[i] - k*i - minarr[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        ans = max(ans, arr[i] + k*i - minarr2[i+1]);
    }
    cout<<ans;
}