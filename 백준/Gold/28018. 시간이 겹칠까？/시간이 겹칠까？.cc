#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[1000001];
int sum[1000001];

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr[a]++;
        arr[b+1]--;
    }
    sum[0] = arr[0];
    for(int i=1;i<1000001;i++){
        sum[i] = sum[i-1]+arr[i];
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int a;cin>>a;
        cout<<sum[a]<<'\n';
    }
}