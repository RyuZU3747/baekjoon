#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

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
    for(int i=0;i<1001;i++) root[i] = i;
    int n;cin>>n;
    vector<pii> arr;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end(),[](pii a, pii b){return a.second > b.second;});
    int ans = 0;
    for(auto e:arr){
        int cur = find(e.first);
        if(cur!=0){
            ans += e.second;
            Union(cur, cur-1);
        }
    }
    cout<<ans;
}