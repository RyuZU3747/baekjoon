#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int arr[101];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int out = 1;
    while(out){
        int idx;
        int mx = 0;
        for(int i=0;i<n;i++){
            if(arr[mx]<arr[i]) mx = i;
        }
        arr[mx]--;
        for(int i=0;i<n;i++){
            if(i==mx) continue;
            if(arr[i]>0){
                arr[i]--;
                break;
            }
        }
        ans++;
        if(ans>=1441){
            ans = -1;
            break;
        }
        out = 0;
        for(int i=0;i<n;i++){
            if(arr[i]>0) out = 1;
        }
    }
    cout<<ans;
}