#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string s;cin>>s;
    ll ans = 0;
    ll idx = 1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='O'){
            ans += idx;
            ans %= MOD;
        }
        idx *= 2;
        idx %= MOD;
    }
    cout<<ans;
}