#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int root[100010];

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy) root[fx]=root[fy];
    else root[fy]=root[fx];
    return;
}

int main(){
    FASTIO;
    int t;cin>>t;
    while(t--){
        for(int i=0;i<100010;i++) root[i] = i;
        int n,m;cin>>n>>m;
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            if(find(a)!=find(b)) Union(a,b);
        }
        int st = find(1);
        int ed = find(n);
        if(st==ed){
            cout<<0<<'\n';
            continue;
        }
        vector<int> barn(100010);
        vector<vector<int>> barnnum(100010);
        vector<ll> from1(100010, 1234567890);
        vector<ll> ton(100010, 1234567890);
        ll ans = 1234567890123456789;
        for(int i=1;i<=n;i++) barn[i] = find(i);
        for(int i=1;i<=n;i++) barnnum[find(i)].push_back(i);

        int fidx = 0;
        int tidx = 0;
        for(int i=1;i<=n;i++){
            while(fidx < barnnum[st].size()){
                from1[barn[i]] = min(from1[barn[i]], (ll)abs(i-barnnum[st][fidx]));
                if(barnnum[st][fidx] < i) fidx++;
                else break;
            }
            if(fidx) fidx--;
            while(tidx < barnnum[ed].size()){
                ton[barn[i]] = min(ton[barn[i]], (ll)abs(i-barnnum[ed][tidx]));
                if(barnnum[ed][tidx] < i) tidx++;
                else break;
            }
            if(tidx) tidx--;
        }

        for(int i=1;i<=n;i++) ans = min(ans, from1[barn[i]]*from1[barn[i]] + ton[barn[i]]*ton[barn[i]]);
        cout<<ans<<'\n';
    }
}