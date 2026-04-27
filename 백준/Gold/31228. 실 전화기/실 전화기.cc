#include <bits/stdc++.h>

#define ll long long int 

#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)

using namespace std;

int main(){

    ll n,k;cin>>n>>k;

    if(k > n/2) k = n-k;

    ll g = gcd(n,k);

    n/=g;

    k/=g;

    if(n%k==0) cout<<0;

    else{

        cout<<(k-1) * n;

    }

}