#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> graph[5001];
int cnt[5001];
int mdep;

void dfs(int cur, int par, int dep){ 
    cnt[dep]++;
    mdep = max(mdep, dep);
    for(auto e: graph[cur]){
        if(e==par) continue;
        dfs(e, cur, dep+1);
    }
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int cnt1[5001];
    int cnt2[5001];
    ll ans = 0;
    for(int i=1;i<=n;i++){ //시작점
        memset(cnt1, 0, sizeof cnt1);
        memset(cnt2, 0, sizeof cnt2);
        for(auto e: graph[i]){
            memset(cnt, 0, sizeof cnt);
            mdep = 0;
            dfs(e, i, 1);
            for(int j=1;j<=mdep;j++){
                ans += cnt[j] * cnt2[j];
                cnt2[j] += cnt[j] * cnt1[j];
                cnt1[j] += cnt[j];
            }
        }
    }
    cout<<ans;
}