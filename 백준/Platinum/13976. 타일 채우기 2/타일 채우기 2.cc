#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

ll mat[2][2];
ll ans[2][2];
ll n;
ll b;

void multi(ll a[][2], ll b[][2]){
    ll t1[2][2];
    memset(t1, 0, sizeof t1);
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            for(int t=0;t<2;t++){
                t1[r][c] += (a[r][t]*b[t][c])%MOD;
                t1[r][c] += MOD;
                t1[r][c] %= MOD;
            }
        }
    }
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
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

int main(){
    cin>>n;
    mat[0][0] = 4;
    mat[0][1] = -1;
    mat[1][0] = 1;
    mat[1][1] = 0;
    ans[0][0] = 1;
    ans[0][1] = 0;
    ans[1][0] = 0;
    ans[1][1] = 1;
    if(n%2==1){
        cout<<0;
        return 0;
    }
    if(n==2){
        cout<<3;
       return 0;
    }
    divide(n/2);
    cout<<(ans[0][0]+ans[0][1])%MOD;
}