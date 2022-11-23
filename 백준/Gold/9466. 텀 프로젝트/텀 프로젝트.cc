#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int ar[100001];
int vis[100001];
int fin[100001];
int ans;

void dfs(int cur){
    vis[cur] = 1;
    int next = ar[cur];
    if(vis[next]==1){
        if(fin[next]==0){
            ans++;
            for(int i=next;i!=cur;ans++,i=ar[i]);
        }
    }
    else dfs(next);
    fin[cur] = 1;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        memset(vis, 0, sizeof vis);       
        memset(fin, 0, sizeof fin);
        ans = 0;
        for(int i=1;i<=n;i++) cin>>ar[i];
        for(int i=1;i<=n;i++){
            if(vis[i]==0) dfs(i);
        }
        cout<<n-ans<<'\n';
    }
}