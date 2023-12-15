#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int m,n,q;cin>>m>>n>>q;
    int arr[1001];
    for(int i=0;i<n;i++) cin>>arr[i];
    int nw[1001];
    for(int i=0;i<1001;i++) nw[i] = 1;
    int idx = 1;
    for(int i=1;i<=m;i++){
        cout<<"? "<<i<<' '<<idx<<'\n';
        cout<<flush;
        int ans;cin>>ans;
        if(ans>1) nw[idx++] = ans-1;
        else nw[idx++] = ans+1;
    }
    cout<<"! ";
    for(int i=1;i<=n;i++) cout<<nw[i]<<' ';
    cout<<flush;
}