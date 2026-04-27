#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll basis[61];

int main(){
    int n;cin>>n;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        for(int ld = 60;ld>=0;ld--){
            if(a&(1LL<<ld)){
                if(basis[ld]==0){
                    basis[ld] = a;
                    break;
                }
                else a ^= basis[ld];
            }
        }
    }
    for(int i=60;i>=0;i--){
        ans = max(ans, ans^basis[i]);
    }
    cout<<ans;
}