#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<array<int, 3>> cord;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        cord.push_back({a,b,i});
    }
    sort(cord.begin(), cord.end(),[](auto a, auto b){
        if(a[0] == b[0]) return a[1] < b[1];
        return a[0] < b[0];
    });
    for(int i=0;i<n-1;i++){
        cout<<cord[i][2]+1<<' '<<cord[i+1][2]+1<<'\n';
    }
}