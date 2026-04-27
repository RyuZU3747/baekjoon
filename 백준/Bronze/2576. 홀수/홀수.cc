#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    vector<int> a(7);
    for(int i=0;i<7;i++) cin>>a[i];
    sort(a.begin(),a.end());
    int s = 0;
    int m = 1234567890;
    for(auto x: a){
        if(x%2==1){
            s+=x;
            m = min(m,x);
        }
    }
    if(m==1234567890) cout<<-1;
    else cout<<s<<'\n'<<m;
}