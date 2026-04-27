#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int cnt[501][501][27];

int main(){
    int n,m,k;cin>>n>>m>>k;
    string tile[501];
    for(int i=0;i<n;i++){
        cin>>tile[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cnt[i%k][j%k][tile[i][j]-'A']++;
        }
    }
    string pat[501];
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            int mxcnt = 0;
            char mxc = 'A';
            for(int x=0;x<27;x++){
                if(cnt[i][j][x] > mxcnt){
                    mxcnt = cnt[i][j][x];
                    mxc = x+'A';
                }
            }
            pat[i] += mxc;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(tile[i][j] != pat[i%k][j%k]) ans++;
        }
    }
    cout<<ans<<'\n';
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<pat[i%k][j%k];
        }
        cout<<'\n';
    }
}