#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pii> graph[100001];
int node[100001][21];
int sz0[21];
int sz1[21];

void dfs(int cur, int bef, int bit, int head){
    if(head&(1<<bit)){
        node[cur][bit] = 1;
        sz1[bit]++;
    }
    else{
        node[cur][bit] = 0;
        sz0[bit]++;
    }
    for(auto [nxt, c]: graph[cur]){
        if(nxt==bef) continue;
        dfs(nxt, cur, bit, head ^ c);
    }
}

int main(){
    FASTIO;
    int n,x;cin>>n>>x;
    for(int i=0;i<n-1;i++){
        int a,b,c;cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    for(int bit=0;bit<21;bit++){
        dfs(1,0,bit,x);
    }
    int ans = 1234567890;
    for(int i=1;i<=n;i++){
        int curc = 0;
        for(int bit=0;bit<21;bit++){
            if(x&(1<<bit)){
                if(node[i][bit]) curc += sz1[bit];
                else curc += sz0[bit];
            }
            else{
                if(node[i][bit]) curc += sz0[bit];
                else curc += sz1[bit];
            }
        }
        ans = min(ans, curc);
    }
    cout<<ans;
}