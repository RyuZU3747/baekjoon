#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll a, b;cin>>a>>b;

    ll comb[33][33];
    comb[0][0] = 1;
    comb[1][0] = 1;
    comb[1][1] = 1;
    for(int i=2;i<=32;i++){
        comb[i][0] = 1;
        comb[i][i] = 1;
        for(int j=1;j<i;j++){
            comb[i][j] = comb[i-1][j-1] + comb[i-1][j];
        }
    }

    ll bigsu = 0;
    ll biglead = 0;
    for(int i=0;i<=32;i++){
        ll cur = 1LL<<i;
        biglead = i-1;
        if(b >= cur){
            for(int j=0;(j+1) * 2<=i;j++){//1의 개수
                bigsu += comb[i-1][j];
            }
        }
        else break;
    }
    for(int lead = biglead - 1;lead >= 0; lead--){
        if(b & (1<<lead)){
            int onesu = 0, zerosu = 0;
            for(int i=biglead;i>lead;i--){
                if(b & (1<<i)) onesu++;
                else zerosu++;
            }
            zerosu++;
            for(int j=0;(j+onesu)*2 <= biglead+1;j++){
                bigsu += comb[lead][j];
            }
        }
    }

    ll smallsu = 0;
    ll smalllead = 0;
    for(int i=0;i<=32;i++){
        ll cur = 1LL<<i;
        smalllead = i-1;
        if(a >= cur){
            for(int j=0;(j+1) * 2<=i;j++){
                smallsu += comb[i-1][j];
            }
        }
        else break;
    }
    for(int lead = smalllead - 1;lead >= 0; lead--){
        if(a & (1<<lead)){
            int onesu = 0, zerosu = 0;
            for(int i=smalllead;i>lead;i--){
                if(a & (1<<i)) onesu++;
                else zerosu++;
            }
            zerosu++;
            for(int j=0;(j+onesu)*2 <= smalllead+1;j++){
                smallsu += comb[lead][j];
            }
        }
    }

    int zerosu = 0, onesu = 0;
    for(int i=0;i<=biglead;i++){
        if(b & (1<<i)) onesu++;
        else zerosu++;
    }
    if(zerosu >= onesu) bigsu++;
    cout<<bigsu - smallsu;
}