#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int t;cin>>t;
    while(t--){
        ll n, m;cin>>n>>m;
        if(n <= 2 || m <= 2 || n*(m-2) % 2 == 1) cout<<"First\n";
        else cout<<"Second\n";
    }
}