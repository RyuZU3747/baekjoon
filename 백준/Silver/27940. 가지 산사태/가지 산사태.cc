#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m,k;cin>>n>>m>>k;
    int flr[100001] = {0,};
    for(int i=0;i<m;i++){
        int t,r;cin>>t>>r;
        flr[0] += r;
        if(flr[0]>k){
            cout<<i+1<<' '<<1;
            return 0;
        }
    }
    cout<<-1;
}