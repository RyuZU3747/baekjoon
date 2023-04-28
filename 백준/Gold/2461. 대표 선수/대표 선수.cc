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
    int n,m;cin>>n>>m;
    vector<vector<int>> stu(1001);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;cin>>a;
            stu[i].push_back(a);
        }
        sort(stu[i].begin(),stu[i].end());
    }
    int curidx[1001] = {0,};
    int ans = 1234567890;
    int mn = 1234567890, mx = 0;
    int mnidx = 0, mxidx = 0;
    int idxcnt = 0;
    while(1){
        mn = 1234567890;
        mx = 0;
        for(int i=0;i<n;i++){
            int idx = curidx[i];
            if(idx==m){
                idxcnt++;
            }
            if(mn > stu[i][idx]){
                mnidx = i;
                mn = stu[i][idx];
            }
            if(mx < stu[i][idx]){
                mxidx = i;
                mx = stu[i][idx];
            }
        }
        ans = min(ans,abs(mx-mn));
        if(idxcnt>=1) break;
        if(curidx[mnidx]<m) curidx[mnidx]++;
    }
    cout<<ans;
}