#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    map<vector<string>, int> s;
    for(int i=0;i<n;i++){
        vector<string> t(3);
        cin>>t[0]>>t[1]>>t[2];
        sort(t.begin(),t.end());
        s[t]++;
    }
    int ans = 0;
    for(auto x:s){
        ans = max(ans,x.second);
    }
    cout<<ans;
}