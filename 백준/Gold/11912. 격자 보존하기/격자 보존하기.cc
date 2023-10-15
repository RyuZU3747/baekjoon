#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,k,d;cin>>n>>k>>d;
    vector<int> arr(k);
    vector<int> kan;
    for(auto &x:arr) cin>>x;
    for(int i=0;i<k-1;i++) kan.push_back(arr[i+1] - arr[i] - 1);
    sort(kan.begin(), kan.end(), [](int a, int b){return a > b;});
    int fr = arr[0]-1;
    int ed = n - arr[k-1];
    int idx = 0;
    int ans = 0;
    while(d > 3 && idx < k-1){
        ans += kan[idx++];
        d-=2;
    }
    if(d==1) ans += max(fr,ed);
    else if(d==2) ans += max({fr+ed, kan[idx]});
    else if(d==3) ans += max({fr+ed, kan[idx]+fr, kan[idx]+ed});
    else ans += fr+ed;
    cout<<ans;
}