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
    int mx = -1;
    int ans = -1234567890;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        mx = max(mx,a);
        ans = max(ans, mx-a);
    }
    cout<<ans;
}