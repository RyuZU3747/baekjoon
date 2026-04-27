#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int vis[1000001];

int main(){
    int n,s;cin>>n>>s;
    vector<int> cord(n);
    vector<int> h(n);
    for(auto &x:cord) cin>>x;
    for(auto &x:h) cin>>x;
    queue<int> q;
    vector<int> ans;
    ans.push_back(s-1);
    q.push(s-1);
    vis[s-1] = 1;
    while(!q.empty()){
        int curi = q.front();
        q.pop();
        int leftidx = lower_bound(cord.begin(),cord.begin() + curi, cord[curi] - h[curi]) - cord.begin();
        for(int i=leftidx;i<curi;i++){
            if(vis[i]) continue;
            vis[i] = 1;
            q.push(i);
            ans.push_back(i);
        }

        int rightidx = upper_bound(cord.begin()+curi, cord.end(), cord[curi] + h[curi]) - cord.begin();
        for(int i=curi + 1; i < rightidx;i++){
            if(vis[i]) continue;
            vis[i] = 1;
            q.push(i);
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    for(auto e: ans) cout<<e+1<<' ';
}