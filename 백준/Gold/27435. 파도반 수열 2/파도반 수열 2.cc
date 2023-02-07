#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll mat[3][3];
ll ans[3][3];
ll n;

void multi(ll a[][3], ll b[][3]){
    ll t1[3][3];
    memset(t1, 0, sizeof t1);
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            for(int t=0;t<3;t++){
                t1[r][c] += (a[r][t]*b[t][c])%MOD;
                t1[r][c] += MOD;
                t1[r][c] %= MOD;
            }
        }
    }
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            a[r][c] = t1[r][c]%MOD;
        }
    }
}

void divide(ll b){
    if(b==0) return;
    if(b%2==1) multi(ans,mat);
    multi(mat,mat);
    divide(b/2);
}

ll st[8] = {0,1,1,1,2,2,3};

int main(){
    int t;cin>>t;
    while(t--){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                mat[i][j] = 0;
                ans[i][j] = 0;
            }
        }
        mat[0][1] = 1;
        mat[0][2] = 1;
        ans[0][1] = 1;
        ans[0][2] = 1;
        for(int i=0;i<3;i++){
            if(i){
                mat[i][i-1] = 1;
                ans[i][i-1] = 1;
            }
        
        }
        cin>>n;
        if(n<=6) cout<<st[n]<<'\n';
        else{
            divide(n);
            cout<<ans[0][0]%MOD<<'\n';
        }
    }
}