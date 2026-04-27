#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    int ans = 0;
    int left = 0, right = n-1;
    while(left<right){
        if(a[right] >= k) right--;
        if(a[left] + a[right] <= k){
            ans++;
            left++;
            right--;
        }
        else{
            right--;
        }
    }
    cout<<ans;
}