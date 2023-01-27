#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    vector<int> a;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    for(auto x:a) cout<<x<<'\n';
}