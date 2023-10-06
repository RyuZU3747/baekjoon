#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string mp[1001][1001];

int main(){
    int sero, garo;cin>>sero>>garo;
    set<string> name;
    for(int i=0;i<sero;i++){
        for(int j=0;j<garo;j++){
            cin>>mp[i][j];
            name.insert(mp[i][j]);
        }
    }
    set<string> ans;
    for(int r=0;r<sero;r++){
        for(int c=0;c<garo;c++){
            if((c+1<garo&&mp[r][c]==mp[r][c+1])) ans.insert(mp[r][c]);
            if((r+1<sero&&mp[r+1][c]==mp[r][c])) ans.insert(mp[r][c]);
            if((c+2<garo&&mp[r][c]==mp[r][c+2])) ans.insert(mp[r][c]);
            if((r+2<sero&&mp[r+2][c]==mp[r][c])) ans.insert(mp[r][c]);
        }
    }
    if(ans.size()==0) cout<<"MANIPULATED";
    else{
        for(auto e: ans){
            cout<<e<<'\n';
        }
    }
}