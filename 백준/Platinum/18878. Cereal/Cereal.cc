#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int ans[100010];
int cr[100010];
vector<pii> cow(100010);
int cnt;

void recur(int c, int i){
    if(cr[c] == 0){
        cr[c] = i;
        cnt++;
        return;
    }
    else if(cr[c] < i) return;
    else{
        int steal = cr[c];
        cr[c] = i;
        if(c == cow[steal].second) return;
        recur(cow[steal].second, steal);
    }
}

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        cow[i]={a,b};
    }
    for(int i=n-1;i>=0;i--){
        recur(cow[i].first, i);
        ans[i] = cnt;
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<'\n';
}