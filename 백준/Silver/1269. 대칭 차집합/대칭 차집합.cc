#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

int main(){
    set<int> a;
    set<int> b;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++){
        int tmp;cin>>tmp;
        a.insert(tmp);
    }
    for(int i=0;i<y;i++){
        int tmp;cin>>tmp;
        b.insert(tmp);
    }
    int acnt = 0, bcnt = 0;
    for(auto p: a){
        if(b.find(p)!=b.end()){
            bcnt++;
        }
    }
    for(auto p: b){
        if(a.find(p)!=a.end()){
            acnt++;
        }
    }
    cout<<y-bcnt+x-acnt;
}