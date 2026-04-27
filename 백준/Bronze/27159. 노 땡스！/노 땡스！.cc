#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    int arr[34];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>1){
            ans += arr[i];
        }
    }
    cout<<ans;
}
