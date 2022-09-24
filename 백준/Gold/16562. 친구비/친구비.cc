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

int root[10001];
int chingubi[10001];

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(chingubi[fx]<chingubi[fy]) root[fy] = fx;
    else root[fx] = fy;
    return;
}

int check[10001];
int main(){
cin.tie(0);
ios_base::sync_with_stdio(0);
    for(int i=0;i<10001;i++){
        root[i]=i;
    }
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) cin>>chingubi[i];
    for(int i=0;i<m;i++){
        int v,w;
        cin>>v>>w;
        Union(v,w);
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(check[find(i)]==0){
            ans += chingubi[find(i)];
            check[find(i)]=1;
        }
    }
    if(ans>k) cout<<"Oh no";
    else cout<<ans;
}