#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int ar[1001];
    int od = 0, ev = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]&1) od++;
        else ev++;
    }
    int ans = 0;
    if(od==ev||od+1==ev) ans = n;
    else if(od<ev){
        ans = od*2+1;
    }
    else{
        while(od>ev){
            od-=2;
            ev++;
        }
        if(od==ev) ans = od*2;
        else ans = od*2+1;
    }
    cout<<ans;
}