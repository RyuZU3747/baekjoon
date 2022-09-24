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

int root[200002];

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

int su[200002];
void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(su[fx]<su[fy]){
        root[fy] = fx;
        su[fx] += su[fy]; 
    }
    else{
        root[fx] = fy;
        su[fy] += su[fx];
    }
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        map<string, int> index;
        int ins = 1;
        for(int i=0;i<200002;i++){
            root[i]=i;
            su[i]=1;
        }
        int f;cin>>f;
        for(int i=0;i<f;i++){
            char t1[40], t2[40];
            scanf(" %s %s",t1,t2);
            string a(t1),b(t2);
            index.insert({a,ins++});
            index.insert({b,ins++});
            int a1, a2;
            a1 = index.find(a)->second;
            a2 = index.find(b)->second;
            if(find(a1)!=find(a2)){
                Union(a1,a2);
            }
                cout<<su[find(a1)]<<'\n';
        }
    }
}