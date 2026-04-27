#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<vector<int>,int> ty;
set<int> point[12];
vector<int> tet;

void backtrac(int len){
    if(len==12){
        if(ty[tet]==0){
            for(auto x: tet) cout<<x<<' ';
            exit(0);
        }
        return;
    }
    for(auto e: point[len]){
        tet.push_back(e);
        backtrac(len+1);
        tet.pop_back();
    }
}

int main(){;
    for(int i=0;i<2047;i++){
        vector<int> tmp;
        for(int i=1;i<=11;i++){
            int a;cin>>a;
            tmp.push_back(a);
            point[i].insert(a);
        }
        ty[tmp] = 1;
    }
    backtrac(1);
}