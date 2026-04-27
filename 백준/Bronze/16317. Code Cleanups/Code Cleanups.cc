#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int day[500];

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        day[a] = 1;
    }
    int ans = 0;
    int cur = 0;
    int cnt = 0;
    for(int i=1;i<=365;i++){
        if(day[i]==1) cnt++;
        cur += cnt;
        if(cur >= 20){
            cnt = 0;
            cur = 0;
            ans++;
        }
    }
    if(cur!=0) ans++;
    cout<<ans;
}