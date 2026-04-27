#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) cout<<"*";
        for(int j=0;j<2*n-(i+1)*2;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<"*";
        cout<<'\n';
    }
    for(int i=n-2;i>=0;i--){
        for(int j=0;j<=i;j++) cout<<"*";
        for(int j=0;j<2*n-(i+1)*2;j++) cout<<" ";
        for(int j=0;j<=i;j++) cout<<"*";
        cout<<'\n';
    }
}