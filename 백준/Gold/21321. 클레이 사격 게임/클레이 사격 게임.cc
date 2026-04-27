#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int dp[1<<17];
int n;
vector<pii> clay;

int recur(int status, int round){
    int & ret = dp[status];
    if(ret!=0) return ret;

    for(int i=0;i<n;i++){
        if(status & (1<<i)) continue;
        int no = 0;
        for(int j=0;j<i;j++){
            if((status & (1<<j))==0&&clay[i].first % clay[j].first == 0) no = 1;
        }
        if(no) continue;
        ret = max(ret, recur(status ^ (1<<i), round+1)+round * clay[i].second);
    }
    return ret;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        clay.push_back({a, b});
    }
    cout<<recur(0,1);
}