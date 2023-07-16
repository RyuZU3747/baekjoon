#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

ll buarr[250001];
ll toright[250001];
ll sumright[250001];
ll toleft[250001];
ll sumleft[250001];

int main(){
    FASTIO;
    ll n,c;cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>buarr[i];
    }
    for(int i=0;i<n-1;i++){
        toright[i] = (buarr[i+1] - buarr[i] + c) % c;
    }
    for(int i=n-1;i>0;i--){
        toleft[i] = (buarr[i-1] - buarr[i] + c) % c;
    }
    sumright[0] = toright[0];
    for(int i=1;i<n;i++){
        sumright[i] = sumright[i-1] + toright[i];
    }
    for(int i=1;i<n;i++){
        sumleft[i] = sumleft[i-1] + toleft[i];
    }
    ll mn = 1234567890123456789;
    int ans;
    for(int i=0;i<n;i++){
        ll left = sumleft[i];
        ll right;
        if(i==0) right = sumright[n-1];
        else right = sumright[n-1] - sumright[i-1];
        ll tmp = max(left, right);
        if(mn > tmp){
            mn = tmp;
            ans = i+1;
        }
    }
    cout<<ans<<'\n'<<mn;
}