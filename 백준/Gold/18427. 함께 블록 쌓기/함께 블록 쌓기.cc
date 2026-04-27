#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll dp[51][1001];

int main(){
    int n,m,h;cin>>n>>m>>h;
    cin.ignore(1);
    vector<vector<int>> stu(n);
    for(int i=0;i<=n;i++) dp[i][0] = 1;
    for(int i=0;i<n;i++){
        string a;
        getline(cin, a);
        int t = 0;
        for(int j=0;j<a.size();j++){
            if(a[j]==' '){
                stu[i].push_back(t);
                t = 0;
            }
            else{
                t *= 10;
                t += a[j]-'0';
            }
        }
        if(t!=0) stu[i].push_back(t);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=h;j++){
            for(auto e: stu[i-1]){
                if(j-e>=0){
                    dp[i][j] += dp[i-1][j-e];
                    dp[i][j] %= 10007;
                }
            }
            dp[i][j] += dp[i-1][j];
            dp[i][j] %= 10007;
        }
    }
    cout<<dp[n][h];
}