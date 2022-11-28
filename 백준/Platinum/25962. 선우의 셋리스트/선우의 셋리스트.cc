#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll mat[5][5];
ll ans[5][5];
ll n,m;

void multi(ll a[][5], ll b[][5]){
    ll t1[5][5];
    memset(t1, 0, sizeof t1);
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
            for(int t=0;t<5;t++){
                t1[r][c] += (a[r][t]*b[t][c])%MOD;
                t1[r][c] += MOD;
                t1[r][c] %= MOD;
            }
        }
    }
    for(int r=0;r<5;r++){
        for(int c=0;c<5;c++){
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

ll ar[6];

int main(){
    cin>>n>>m;
    for(int i=0;i<5;i++){
        if(i) mat[i][i-1] = 1;
        ans[i][i] = 1;
    }
    for(int i=0;i<m;i++){
        ll tmp;cin>>tmp;
        mat[0][tmp-1]++;
    }
    for(int i=0;i<5;i++){
        ar[i+1] = mat[0][i];
    }
    // ar[2] += (ll)pow(ar[1],2)%MOD;
    // ar[2] %= MOD;
    // ar[3] += ar[1]*ar[2]*2%MOD;
    // ar[3] %= MOD;
    // ar[4] += ar[1]*ar[3]*2%MOD;
    // ar[4] %= MOD;
    // ar[4] += (ll)pow(ar[2],2)%MOD;
    // ar[4] %= MOD;
    // ar[5] += ar[1]*ar[4]*2%MOD;
    // ar[5] %= MOD;
    // ar[5] += ar[2]*ar[3]*2%MOD;
    // ar[5] %= MOD;
    // if(n<6){
    //     cout<<ar[n];
    //     return 0;
    // }
    divide(n);
    // for(int i=0;i<5;i++){
    //     for(int j=0;j<5;j++) cout<<ans[i][j]<<' ';
    //     cout<<'\n'; 
    // }
    // ll a = 0;
    // for(int i=0;i<5;i++){
    //     a += (ans[0][i]*ar[5-i])%MOD;
    //     a %= MOD;
    // }
    cout<<ans[0][0]%MOD;
}