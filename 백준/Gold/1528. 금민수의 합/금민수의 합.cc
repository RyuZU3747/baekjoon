#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int vis[1000001];
vector<int> minsus;
int n;
vector<int> lst;

void dfs(int cur, int idx){
    if(cur==n){
        for(auto e: lst) cout<<e<<' ';
        exit(0);
    }
    for(int i=idx;i<minsus.size();i++){
        int nxt = cur + minsus[i];
        if(nxt <= 1000000 && vis[nxt] == 0 && nxt <= n){
            vis[nxt] = 1;
            lst.push_back(minsus[i]);
            dfs(nxt, i);
            lst.pop_back();
        }
    }
}

int main(){
    cin>>n;
    for(int i=2;;i++){
        int t = i;
        string s = "";
        while(t>1){
            if(t&1) s+='7';
            else s+='4';
            t >>= 1;
        }
        int minsu = stoi(s);
        if(minsu >= 1000000) break;
        minsus.push_back(minsu);
    }
    sort(minsus.begin(), minsus.end());
    queue<int> q;
    q.push(0);
    memset(vis, -1, sizeof vis);
    vis[0] = 0;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(cur == n) break;
        for(int i=0;i<minsus.size();i++){
            int nxt = cur + minsus[i];
            if(nxt <= n && vis[nxt] == -1){
                vis[nxt] = cur;
                q.push(nxt);
            }
        }
    }
    if(vis[n]==-1) cout<<-1;
    else{
        vector<int> ans;
        int x = n;
        while(vis[x]!=0){
            ans.push_back(x-vis[x]);
            x = vis[x];
        }
        cout<<x<<' ';
        for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<' ';
    }
}