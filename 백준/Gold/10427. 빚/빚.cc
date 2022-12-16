#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<ll> arr(4001);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.begin()+n+1);
        ll sumarr[4001];
        memset(sumarr, 0, sizeof sumarr);
        for(int i=1;i<=n;i++) sumarr[i] = sumarr[i-1] + arr[i];
        ll ans = 0;
        for(int sz=1;sz<=n;sz++){
            ll mn = 1234567890;
            for(int i=1;i<=n-sz+1;i++){
                ll h = arr[i+sz-1];
                mn = min(h*sz-(sumarr[i+sz-1]-sumarr[i-1]),mn);
            }
            if(mn<0) mn = 0;
            ans += mn;
        }
        cout<<ans<<'\n';
    }
}