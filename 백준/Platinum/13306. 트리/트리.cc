#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int root[200001];

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
    for(int i=0;i<200001;i++){
        root[i]=i;
    }
    stack<pair<int,vector<int>>> input;
    stack<string> output;
    int n,q;cin>>n>>q;
    map<int,int> par;
    for(int i=1;i<=n-1;i++){
        cin>>par[i+1];
    }
    for(int i=0;i<q+n-1;i++){
        int a;cin>>a;
        if(a==1){
            int b,c;cin>>b>>c;
            input.push({a,{b,c}});
        }
        else{
            int b;cin>>b;
            input.push({a,{b}});
        }
    }
    while(!input.empty()){
        pair<int,vector<int>> cur = input.top();
        input.pop();
        if(cur.first==1){
            if(find(cur.second[0])!=find(cur.second[1])) output.push("NO");
            else output.push("YES");
        }
        else{
            Union(cur.second[0],par[cur.second[0]]);
        }
    }
    while(!output.empty()){
        cout<<output.top()<<'\n';
        output.pop();
    }
}