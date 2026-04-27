#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a%b);
}

int main(){
    int n;cin>>n;
    set<pii> sl;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        int d = gcd(abs(a),abs(b));
        if(a < 0){
            a = -(abs(a)/d);
        }
        else a /= d;
        if(b < 0){
            b = -(abs(b)/d);
        }
        else b /= d;
        sl.insert({a,b});
    }
    cout<<sl.size();
}