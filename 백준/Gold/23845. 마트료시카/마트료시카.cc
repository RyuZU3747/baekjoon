#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<ll> arr(n);
    map<ll,int> cnt;
    for(auto &x:arr){
        cin>>x;
        cnt[x]++;
    }
    sort(arr.begin(), arr.end());
    ll ans = 0;
    ll t = 0;
    ll bef = -1;
    for(int i=0;i<n;i++){
        if(cnt.find(arr[i])!=cnt.end() && cnt[arr[i]] > 0){
            bef = arr[i];
            cnt[arr[i]]--;
            if(cnt[arr[i]]==0) cnt.erase(arr[i]);
            t = 1;
            for(ll j=arr[i]+1;;j++){
                if(cnt.find(j)!=cnt.end() && cnt[j] > 0){
                    t++;
                    bef = j;
                    cnt[j]--;
                    if(cnt[j]==0) cnt.erase(j);
                }
                else{
                    ans += t*bef;
                    break;
                }
            }
        }
    }
    cout<<ans;
}