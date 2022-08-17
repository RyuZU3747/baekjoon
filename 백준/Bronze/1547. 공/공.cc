#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

int main(){
    int m; cin>>m;
    int ar[3]={1,2,3};
    while(m--){
        int a,b;
        cin>>a>>b;
        swap(ar[a-1],ar[b-1]);
    }
    if(ar[0]==1) cout<<1;
    else if(ar[1]==1) cout<<2;
    else cout<<3;
}