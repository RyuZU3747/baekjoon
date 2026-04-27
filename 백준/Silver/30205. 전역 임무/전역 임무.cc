#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll n,m,p;cin>>n>>m>>p;
    vector<ll> immu[501];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;cin>>a;
            immu[i].push_back(a);
        }
        sort(immu[i].begin(), immu[i].end());
    }
    for(int i=0;i<n;i++){
        int items = 0;
        for(int j=0;j<m;j++){
            if(immu[i][j] == -1){
                items++;
                continue;
            }
            if(immu[i][j] <= p){
                p += immu[i][j];
            }
            else{
                while(items && immu[i][j] > p){
                    p *= 2;
                    items--;
                }
                if(immu[i][j] <= p){
                    p += immu[i][j];
                }
                else{
                    cout<<0;
                    exit(0);
                }
            }
        }
        while(items){
            p *= 2;
            items--;
        }
    }
    cout<<1;
}