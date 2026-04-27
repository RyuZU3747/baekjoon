#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll gcd(ll a,ll b){
    if(a%b==0) return b;
    else return gcd(b,a%b);
}

int main(){
    int n;
    cin>>n;
    ll up = 1, down = 1;
    double ans = 0;
    for(int i=1;i<=n;i++){
        ans += (double)n/i;
    }
    cout<<fixed;
    cout.precision(6);
    cout<<ans;
}