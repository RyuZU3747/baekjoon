#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int main(){
    ll r,l,b;cin>>r>>l>>b;
    ll rice[100001];
    ll presum[100001];
    for(int i=0;i<r;i++) cin>>rice[i];
    presum[0] = rice[0];
    for(int i=1;i<r;i++) presum[i] = presum[i-1] + rice[i];
    ll ans = 0;
    ll left = 1, right = r;
    ll mid;
    while(left<=right){
        mid = (left+right)/2;
        int ok = 0;
        for(ll i=0;i<=r-mid;i++){
            ll sl = i;
            ll sr = i+mid-1;
            ll m = (sr+sl)/2;
            ll cost = presum[sr] - presum[m] - (sr-m) * rice[m];
            cost += (m-sl)*rice[m] - (presum[m-1] - presum[sl-1]);
            if(cost <= b){
                ok = 1;
                ans = max(ans, mid);
                break;
            }
        }
        if(ok) left = mid+1;
        else right = mid-1;
    }
    cout<<ans;
}