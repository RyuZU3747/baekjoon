#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int u[250001];
int d[250001];
int sz[250001];
int minsz[250001];

int main(){
    FASTIO;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>u[i];
    }
    for(int i=0;i<n;i++){
        cin>>d[i];
        sz[i] = u[i] - d[i];
    }//최소 사이즈의 배열에서 upper?
    minsz[0] = sz[0];
    for(int i=1;i<n;i++){
        minsz[i] = min(minsz[i-1],sz[i]);
    }
    sort(minsz,minsz+n);
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int a;cin>>a;
        int cnt = lower_bound(minsz,minsz+n,a)-minsz;
        cout<<n-cnt<<'\n';
    }
}