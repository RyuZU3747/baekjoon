#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<fixed;
    cout.precision(2);
    for(int i=0;i<n;i++){
        double a,b,c;
        cin>>a>>b>>c;
        cout<<"$"<<a*b*c<<'\n';
    }
}