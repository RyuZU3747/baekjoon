#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[1000001];

int main(){
    int n,l;cin>>n>>l;
    for(int i=0;i<n;i++) cin>>arr[i];
    int len = 0;
    int sum = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        len++;
        if(len>l){
            sum-=arr[i-l];
            len--;
        }
        if(sum>=129&&sum<=138) ans++;
    }
    cout<<ans;
}