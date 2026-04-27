#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int deg[1001];
int mp[1001][1001];
vector<pii> graph[1001];
int vis[1001];

void euler(int cur){
    for(int i=0;i<graph[cur].size();i++){
        pii & nxt = graph[cur][i];
        if(nxt.second > 0){
            nxt.second--;
            for(auto &e:graph[nxt.first]){
                if(e.first==cur){
                    e.second--;
                    break;
                }
            }
            euler(nxt.first);
        }
        else{
            graph[cur].erase(graph[cur].begin() + i);
            i--;
        }
    }
    cout<<cur<<' ';
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>mp[i][j];
            if(mp[i][j]>=1){
                graph[i].push_back({j,mp[i][j]});
                deg[i]+=mp[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(deg[i]%2){
            cout<<-1;
            return 0;
        }
    }
    
    euler(1);
}