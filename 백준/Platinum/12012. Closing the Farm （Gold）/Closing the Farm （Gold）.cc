#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int root[200001];
int siz[200001];
map<int,int> vis;

int find(int x){
   return root[x] = root[x] == x ? x : find(root[x]);
}

int Union(int x, int y){
   int fx = find(x);
   int fy = find(y);
   if(fx<fy){
      root[fx]=root[fy];
      siz[fy] += siz[fx];
      siz[fx] = 0;
      return siz[fy];
   }
   else{
      root[fy]=root[fx];
      siz[fx] += siz[fy];
      siz[fy] = 0;
      return siz[fx];
   }
}

int main(){
   for(int i=0;i<200001;i++){
      root[i]=i;
      siz[i]=1;
   }
   int n,m;cin>>m>>n;
   map<int, vector<int>> v;
   vector<int> q;
   for(int i=0;i<n;i++){
      int a,b;cin>>a>>b;
      v[a].push_back(b);
      v[b].push_back(a);
   }
   for(int i=0;i<m;i++){
      int a;cin>>a;
      q.push_back(a);
   }
   vector<string> ans;
   int idx = 0;
   for(int i = m-1;i>=0;i--){
      int cur = q[i];
      vis[cur] = 1;
      idx++;
      int no = 0;
      for(auto e: v[cur]){
         if(vis[e]==1&&find(cur)!=find(e)){
            int tmp = Union(cur,e);
            if(idx!=tmp) no = 1;
         }
      }
      if(siz[find(cur)]!=idx) ans.push_back("NO");
      else ans.push_back("YES");
   }
   for(int i=m-1;i>=0;i--) cout<<ans[i]<<'\n';
}