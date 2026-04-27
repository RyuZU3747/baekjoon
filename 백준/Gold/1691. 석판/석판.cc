#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int w,h;
int n;
int stone[601][601];
int dp[601][601];

int recur(int w, int h){
    if(stone[w][h]) return 0;
    int & ret = dp[w][h];
    if(ret!=-1) return ret;

    ret = w*h;
    for(int i=1;i<=w/2;i++) ret = min(ret, recur(i,h) + recur(w-i,h));
    for(int i=1;i<=h/2;i++) ret = min(ret, recur(w,i) + recur(w,h-i));
    return ret;
}

int main(){
    FASTIO;
    cin>>w>>h>>n;
    for(int i=0;i<=w;i++) for(int j=0;j<=h;j++) dp[i][j] = -1;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        stone[a][b] = 1;
    }
    cout<<recur(w,h);
}