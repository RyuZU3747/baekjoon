#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        vector<int> ans;
        int n;cin>>n;
        int mx = 1;
        if(n==1){
            cout<<"1\n1\n";
            continue;
        }
        while(mx<n) mx <<= 1;
        if(mx==n) mx<<=1;
        for(int i=(mx>>2);i<=min(n,((mx>>1)|(mx>>2)-1));i++){
            ans.push_back(i);
        }
        cout<<ans.size()<<'\n';
        for(auto x: ans) cout<<x<<' ';
    }
}