#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<string> s(n);
    for(auto &x:s) cin>>x;
    sort(s.begin(),s.end());
    for(int i=0;i<k;i++) cout<<s[i];
}