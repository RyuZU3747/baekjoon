#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    if(n==k){
        cout<<"Impossible";
        return 0;
    }
    vector<int> ans(n+1);
    int t = 0;
    for(auto &x:ans) x = t++;
    t = n-k;
    for(int i = (t&1)+1;i<=t;i+=2) swap(ans[i], ans[i+1]);
    for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
}