#include <bits/stdc++.h>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pair<int, int>> graph[100001];

int newroot = 1;
int mxlen = 0;

void dfs(int cur, int par, int wei){
    for(auto [nxt, w]: graph[cur]){
        if(nxt == par) continue;
        dfs(nxt, cur, wei + w);
    }
    if(wei > mxlen){
        mxlen = wei;
        newroot = cur;
    }
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        int b;cin>>b;
        while(b != -1){
            int w;cin>>w;
            graph[a].push_back({b,w});
            cin>>b;
        }
    }
    dfs(1, -1, 0);
    mxlen = 0;
    dfs(newroot, -1, 0);
    cout<<mxlen;
}