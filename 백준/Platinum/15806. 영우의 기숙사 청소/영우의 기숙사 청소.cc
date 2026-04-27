#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

queue<pii> q;
int eflr[310][310];
int oflr[310][310];
int dr[8] = {1, 1, 2, 2, -1, -1, -2, -2};
int dc[8] = {2, -2, 1, -1, 2, -2, 1, -1};

int main(){
    FASTIO;
    int n,m,k,t;cin>>n>>m>>k>>t;
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        for(int j=0;j<8;j++){
            int na = a + dr[j];
            int nb = b + dc[j];
            if(na<1||na>n||nb<1||nb>n) continue;
            eflr[a][b] = 1;
            q.push({a,b});
        }
    }
    for(int cur = 0;cur<t;cur++){
        int sz = q.size();
        while(sz--){
            auto [r,c] = q.front(); q.pop();
            for(int i=0;i<8;i++){
                int nr = r + dr[i];
                int nc = c + dc[i];
                if(nr<1||nr>n||nc<1||nc>n) continue;
                if(cur%2==0){
                    if(oflr[nr][nc]) continue;
                    oflr[nr][nc] = 1;
                    q.push({nr,nc});
                }
                else{
                    if(eflr[nr][nc]) continue;
                    eflr[nr][nc] = 1;
                    q.push({nr,nc});
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        int a,b;cin>>a>>b;
        if(t%2==1){
            if(oflr[a][b]){
                cout<<"YES";
                return 0;
            }
        }
        else{
            if(eflr[a][b]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}