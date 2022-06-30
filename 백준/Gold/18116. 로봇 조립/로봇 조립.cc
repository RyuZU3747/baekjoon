#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int root[1000001];
int su[1000001];

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy){
        root[fy] = root[fx];
        su[fx]+=su[fy];
        su[fy]=0;
    }
    else{
        root[fx] = root[fy];
        su[fy]+=su[fx];
        su[fx]=0;
    }
    /*for(int i=1;i<5;i++) cout<<root[i];
    cout<<'\n';
    for(int i=1;i<5;i++) cout<<su[i];
    cout<<'\n';*/
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<1000001;i++){
        root[i]=i;
        su[i]=1;
    }
    for(int i=0;i<n;i++){
        char q;
        int a, b;
        cin>>q;
        if(q=='I'){
            cin>>a>>b;
            if(find(a)!=find(b)) Union(a,b);
        }  
        if(q=='Q'){
            cin>>a;
            cout<<su[find(a)]<<'\n';
        }
    }
}