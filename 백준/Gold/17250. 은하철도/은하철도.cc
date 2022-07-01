#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int root[100001];
int su[100001];

int find(int x){
    return root[x] = root[x]==x ? x : find(root[x]);
}

void Union(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y) return;
    if(x<y){
        root[x]=y;
        su[y]+=su[x];
        su[x]=0;
    }
    else{
        root[y]=x;
        su[x]+=su[y];
        su[y]=0;
    }
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>su[i];
        root[i]=i;
    }
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        Union(a,b);
        cout<<su[find(a)]<<'\n';
    }
}