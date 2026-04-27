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

int main(){
    set<char> ans;
    int n;
    cin>>n;
    char g[100001][2];
    char min0[2] = {'Z','Z'};
    char min1[2] = {'Z','Z'};
    int min0i;
    int min1i;
    for(int i=0;i<n;i++){
        cin>>g[i];
        if(min0[0]>=g[i][0]){
            min0[0] = g[i][0];
            min0[1] = g[i][1];
            min0i = i;
        }
        if(min1[1]>=g[i][1]){
            min1[1] = g[i][1];
            min1[0] = g[i][0];
            min1i = i;
        }
    }
    for(int i=0;i<n;i++){
        if(min0i!=i){
            ans.insert(min0[0]<g[i][1]?g[i][1]:min0[0]);
            ans.insert(min0[1]<g[i][0]?g[i][0]:min0[1]);
        }
        if(min1i!=i){
            ans.insert(min1[0]<g[i][1]?g[i][1]:min1[0]);
            ans.insert(min1[1]<g[i][0]?g[i][0]:min1[1]);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto i: ans) cout<<i<<' ';
}