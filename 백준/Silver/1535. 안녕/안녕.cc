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

int dp[101];//쓴체력일때 기쁨값
int de[21];
int loshp[21];

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>loshp[i];
    for(int i=0;i<n;i++) cin>>de[i];
    
    for(int i=0;i<n;i++){
        for(int hp=100;hp>=0;hp--){
            if(hp-loshp[i]>=0) dp[hp] = max(dp[hp],(dp[hp-loshp[i]]+de[i]));
        }
    }
    cout<<dp[99];
}  
