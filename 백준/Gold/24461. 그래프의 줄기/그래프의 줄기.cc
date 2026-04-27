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

vector<int> graph[100001];
queue<int> remov;
int degree[100001];
int chk[100001];
int dfsnum = 0;

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        degree[a]++;
        degree[b]++;
    }
    for(int i=0;i<n;i++) if(degree[i] == 1) remov.push(i);
    while(remov.size() > 2){
        queue<int> tmp;
        while(!remov.empty()){
            int cur = remov.front();
            remov.pop();
            int t = graph[cur][0];
            chk[cur] = 1;
            degree[cur]--;
            degree[t]--;
            graph[cur].clear();
            // graph[t].erase(lower_bound(graph[t].begin(), graph[t].end(), cur));
            if(degree[t] == 1) tmp.push(t);
        }
        while(!tmp.empty()){
            remov.push(tmp.front());
            tmp.pop();
        }
    }
    for(int i=0;i<n;i++){
        if(chk[i]==0) cout<<i<<' ';
    }
}