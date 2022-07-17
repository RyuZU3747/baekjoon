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


int main(){
    ll n,arr[100001],sum = 0,sarr[100001],zcnt = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        sarr[i]=sum;
        if(sum==0) zcnt++;
    }
    if(sum%4!=0){
        cout<<'0';
        return 0;
    }
    ll ans;
    ll dp[5]={1,};
    if(sum==0) ans = (zcnt-1)*(zcnt-2)*(zcnt-3)/6;
    else{
        for(int i=0;i<n;i++){
            ll tmp = sum/4;
            if(sarr[i]%tmp==0&&sarr[i]/tmp<5&&sarr[i]/tmp>0){
                if(sarr[i]/tmp==4&&arr[i]==0) continue;
                dp[sarr[i]/tmp] += dp[(sarr[i]/tmp)-1];
            }
        }
        ans=dp[4];
    }
    cout<<ans;
}