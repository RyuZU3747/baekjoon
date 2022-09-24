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

int root[201];

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
cin.tie(0);
ios_base::sync_with_stdio(0);
    for(int i=0;i<201;i++){
        root[i]=i;
    }
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int a;cin>>a;
            if(a) Union(i,j);
        }
    }
    int visited[1001];

    for(int i=0;i<m;i++){
        cin>>visited[i];
    }

    for(int i=1;i<m;i++){
        if(find(visited[0])!=find(visited[i])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}