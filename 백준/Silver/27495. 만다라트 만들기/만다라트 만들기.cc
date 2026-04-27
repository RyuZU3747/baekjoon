#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dx[8] = {0,0,1,1,1,-1,-1,-1};
int dy[8] = {-1,1,1,0,-1,1,-1,0};
pair<int,int> st[8] = {{1,1},{1,4},{1,7},{4,1},{4,7},{7,1},{7,4},{7,7}};

int main(){
    vector<string> mp[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            string tmp;cin>>tmp;
            mp[i].push_back(tmp);
        }
    }
    set<pair<string,set<string>>> man;
    for(int i=0;i<8;i++){
        set<string> tmp;
        int x = st[i].first;
        int y = st[i].second;
        for(int j=0;j<8;j++){
            tmp.insert(mp[x+dx[j]][y+dy[j]]);
        }
        man.insert({mp[x][y],tmp});
    }
    int idx = 1;
    for(auto e:man){
        cout<<"#"<<idx<<". "<<e.first<<'\n';
        int i = 1;
        for(auto x:e.second){
            cout<<"#"<<idx<<"-"<<i<<". "<<x<<'\n';
            i++;
        }
        idx++;
    }
}