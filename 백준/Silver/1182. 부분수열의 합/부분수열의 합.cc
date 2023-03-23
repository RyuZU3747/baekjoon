#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;
int n,k;
int arr[21];
int ans;

void backtrac(int cur,int sum){
    if(sum == k) ans++;
    for(int i=cur+1;i<n;i++){
        sum += arr[i];
        backtrac(i,sum);
        sum -= arr[i];
    }
    return;
}

int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        backtrac(i,arr[i]);
    }
    cout<<ans;
}