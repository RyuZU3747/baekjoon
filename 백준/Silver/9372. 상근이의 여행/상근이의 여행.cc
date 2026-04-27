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

int root[100001];

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
    int t;cin>>t;
    while(t--){
        for(int i=0;i<100001;i++){
            root[i]=i;
        }
        int n,m;
        cin>>n>>m;
        int cnt = 0;
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            if(find(a)!=find(b)){
                Union(a,b);
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}