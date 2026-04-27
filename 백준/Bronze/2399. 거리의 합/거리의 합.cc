#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10001];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans += abs(arr[i]-arr[j]);
        }
    }
    cout<<ans;
}