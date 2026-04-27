#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int ar[2001];
    memset(ar, 0, sizeof ar);
    for(int i=0;i<n;i++) cin>>ar[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n+m;j++){
            int tmp;cin>>tmp;
            ar[j] += tmp;
            ar[i] -= tmp;
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<ar[i]<<' ';
    }
}
