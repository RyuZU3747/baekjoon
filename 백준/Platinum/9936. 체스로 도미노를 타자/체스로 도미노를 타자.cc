#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dp[3001][1001][8];
int board[1001][3];
int n,k;

int recur(int rc, int num, int st){
    if(num==0) return 0;
    if(rc>=3*n) return -1234567890;
    int & ret = dp[rc][num][st];
    if(ret != -1234567890) return ret;
    int r = rc/3;
    int c = rc%3;
    if(st&1) ret = recur(rc+1, num, st>>1);//선택불가
    else{
        ret = recur(rc+1, num, st>>1); //선택안한거
        if(r < n-1) ret = max(ret, recur(rc+1, num-1, (st>>1 | 4)) + board[r][c] + board[r+1][c]);//세로
        if((st&2)==0&&c!=2) ret = max(ret, recur(rc+2, num-1, st>>2) + board[r][c] + board[r][c+1]);//가로
    }
    return ret;
}   

int main(){
    FASTIO;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++) cin>>board[i][j];
    }
    for(int i=0;i<3001;i++){
        for(int j=0;j<1001;j++){
            for(int k=0;k<8;k++) dp[i][j][k] = -1234567890;
        }
    }
    cout<<recur(0,k,0);
}