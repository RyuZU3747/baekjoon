#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll _;cin>>_;
    while(_--){
        ll au,ad,bu,bd;
        cin>>au>>ad>>bu>>bd;

        ll agcd = gcd(au,ad);
        ll bgcd = gcd(bu,bd);
        au /= agcd;
        ad /= agcd;
        bu /= bgcd;
        bd /= bgcd;

        ll g = gcd(bd,ad);
        ll nd = lcm(ad,bd);
        ll muta = bd/g;
        ll mutb = ad/g;
        ll nau = au * muta;
        ll nbu = bu * mutb;
        if(abs(nau - nbu) == 1){
            cout<<"1/"<<nd<<'\n';
        }
        else{
            cout<<"NOT NEIGHBORS\n";
        }
    }    
}