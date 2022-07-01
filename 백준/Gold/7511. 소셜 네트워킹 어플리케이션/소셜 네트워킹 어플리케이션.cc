#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int root[100001];

int find(int x){
    return root[x] = root[x]==x ? x : find(root[x]);
}

void Union(int x, int y){
    x = find(x);
    y = find(y);
    if(x==y) return;
    if(x>y) root[x]=y;
    else root[y]=x;
    return;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    for(int _=1;_<=t;_++){
        cout<<"Scenario "<<_<<':'<<'\n';
        int n,k,a,b;
        cin>>n>>k;
        for(int i=0;i<n;i++) root[i]=i;
        for(int i=0;i<k;i++){
            cin>>a>>b;
            Union(a,b);
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int u,v;
            cin>>u>>v;
            if(find(u)==find(v)) cout<<"1\n";
            else cout<<"0\n";
        }
        cout<<'\n';
    }
}