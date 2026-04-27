#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    char pum[1001];
    for(int i=0;i<n;i++) cin>>pum[i];
    int m,k;cin>>m>>k;
    map<int,vector<int>> josu;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            int a;cin>>a;
            josu[i].push_back(a);
        }
    }
    int cnt = 0;
    for(int i=0;i<m;i++){
        int no = 0;
        for(auto e: josu[i]){
            if(pum[e-1]=='P') no = 1;
        }
        if(no==0) cnt++;
    }
    if(cnt>0) cout<<'W';
    else cout<<'P';
}