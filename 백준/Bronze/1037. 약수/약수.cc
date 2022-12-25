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
    int ar[51];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(&ar[0],&ar[n]);
    cout<<ar[0]*ar[n-1];
}