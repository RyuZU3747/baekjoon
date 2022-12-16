#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int summap[301][301];
int mp[301][301];

int main(){
    int n;cin>>n;
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            cin>>mp[r][c];
        }
    }
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            summap[r][c] = summap[r][c-1] + summap[r-1][c] + mp[r][c] - summap[r-1][c-1];
        }
    }
    int ans = -123456789;
    for(int sz=1;sz<=n;sz++){
        for(int r=1;r<=n-sz+1;r++){
            for(int c=1;c<=n-sz+1;c++){
                ans = max(ans,summap[r+sz-1][c+sz-1] + summap[r-1][c-1] - summap[r+sz-1][c-1] - summap[r-1][c+sz-1]);
            }
        }
    }
    cout<<ans;
}