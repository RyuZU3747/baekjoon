#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> gr[101001];
int vis[101001];

int main(){
    int n,k,m;cin>>n>>k>>m;
    for(int i=1;i<=m;i++){
        for(int j=0;j<k;j++){
            int a;cin>>a;
            gr[a].push_back(n+i);
            gr[n+i].push_back(a);
        }
    }
    queue<pii> q;
    q.push({1,1});
    vis[1] = 1;
    int ans = -1;
    while(!q.empty()){
        int cur = q.front().first;
        int su = q.front().second;
        q.pop();
        if(cur==n){
            ans = max(ans, su);
            break;
        }
        for(auto nxt:gr[cur]){
            if(vis[nxt]) continue;
            if(nxt > n){
                q.push({nxt,su});
                vis[nxt] = 1;
            }
            else{
                q.push({nxt,su+1});
                vis[nxt] = 1;
            }
        }
    }
    cout<<ans;
}