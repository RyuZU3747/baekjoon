#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int root[10001];//최소 친구비로 모음
int chingubi[10001];

int find(int x){
    return root[x] = root[x]==x ? x:find(root[x]);
}

int Union(int x ,int y){
    int a = find(x);
    int b = find(y);
    if(chingubi[a]<chingubi[b]) return root[b]=root[a];
    else return root[a]=root[b];
}

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        cin>>chingubi[i];
        root[i]=i;
    }
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        Union(a,b);
    }
    int check[10001]={0,};
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(check[find(i)]==1) continue;
        ans += chingubi[find(i)];
        check[find(i)]=1;
    }
    if(ans<=k) cout<<ans;
    else cout<<"Oh no";
} 