#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int m,k;
set<int> yak[7000];
vector<int> pret;
int dp[1001][5001];
void getyak(){
    for(int j=0;j<7000;j++){
        for(int i=1;i*i<=j;i++){
            if(j%i==0){
                yak[j].insert(i);
                yak[j].insert(j/i);
            }
        }
        int tmp = j;
        int sum = 0;
        do{
            sum += tmp%10;
            tmp /= 10;
        }while(tmp);
        if(yak[j].find(sum) != yak[j].end()) pret.push_back(j);
    }
}

int solve(int idx, int su){
    int & ret = dp[idx][su];
    if(ret!=-1) return ret;
    if(su==0) return 1;
    if(pret[idx]>su) return 0;
    ret = solve(idx, su-pret[idx]) + solve(idx+1,su);
    ret %= k;
    return ret;
}

int main(){
    cin>>m>>k;
    getyak();
    memset(dp, -1, sizeof dp);
    cout<<solve(0,m);
}