#include <bits/stdc++.h>
#include <algorithm>
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

bool cmp(iii a,iii b){
    return get<2>(a) < get<2>(b);
}

vector<iii> con;
int main(){
    for(int i=0;i<100001;i++){
        root[i]=i;
    }
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        con.push_back(make_tuple(a,b,c));
    }
    sort(con.begin(),con.end(),cmp);
    for(int i=0;i<m;i++){
        int flag = 1;
        if(find(get<0>(con[i]))!=find(get<1>(con[i]))){
            Union(get<0>(con[i]),get<1>(con[i]));
            ans += get<2>(con[i]);
        }
        //cout<<get<0>(con[i])<<' '<<get<1>(con[i])<<' '<<get<2>(con[i])<<'\n';
        for(int j=1;j<=n;j++){
            if(find(1)!=find(j)) flag = 0;
        }
        if(flag) {
            cout<<ans;
            return 0;
        }
    }
}