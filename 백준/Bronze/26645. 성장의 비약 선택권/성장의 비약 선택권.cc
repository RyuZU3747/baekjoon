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
    int mx = 4;
    int lev = n+1;
    int tmp = n;
    if(tmp<=229){
        tmp+=2;
        if(tmp>230) tmp = 230;
        if(lev<tmp){
            mx = 3;
            lev = tmp;
        }
    }tmp = n;
    if(tmp<=219){
        tmp+=4;
        if(tmp>220) tmp = 220;
        if(lev<tmp){
            mx = 2;
            lev = tmp;
        }
    }tmp = n;
    if(tmp<=209){
        tmp+=8;
        if(tmp>210) tmp = 210;
        if(lev<tmp){
            mx = 1;
            lev = tmp;
        }
    }
    cout<<mx;
}