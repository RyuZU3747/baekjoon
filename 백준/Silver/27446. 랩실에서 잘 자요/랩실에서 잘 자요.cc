#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int yes[101];//3칸이상은따로
int vis[101];
int n,m;
int dfs(int st,int dep){
    if(st>n) return -1;
    if(dep>=4) return -1;
    vis[st] = 1;
    int nxt = st+1;
    int to = -1;
    if(yes[st]==0){
        to = st;
        dep = 0;
    }
    to = max(to,dfs(nxt,dep+1));
    return to;
}

int main(){
    cin>>n>>m;
    set<int> arr;
    for(int i=0;i<m;i++){
        int tmp;cin>>tmp;
        yes[tmp] = 1;
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0&&yes[i]==0){
            ans += 5+2*(dfs(i,0)-i+1);
        }
    }
    cout<<ans;
}