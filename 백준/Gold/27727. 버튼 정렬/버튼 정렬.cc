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
    ll n;cin>>n;
    ll arr[100010];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll k;cin>>k;
    ll mx = -1;
    ll cnt = 0;
    ll ans = 0;
    
    for(int i=0;i<n-1;i++) if(arr[i] > arr[i+1]) mx = max(mx, arr[i]);
    if(mx!=-1){
        for(int i=0;i<n;i++){
            cnt += max(0LL, mx-arr[i]);
            arr[i] = max(mx, arr[i]);
        }
        if(cnt <= k) ans++;
    }

    for(ll i=0;i<n-1;i++){
        if(arr[i] < arr[i+1]){
            if(cnt + (arr[i+1]-arr[i]) * (i+1) <= k){
                cnt += (arr[i+1]-arr[i]) * (i+1);
                ans += arr[i+1]-arr[i];
            }
            else{
                ans += (k-cnt)/(i+1); 
                cnt = k;
                break;
            }
        }
    }
    cout<<ans + max(0LL, (k-cnt)/n);
}