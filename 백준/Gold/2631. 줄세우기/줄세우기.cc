#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
using namespace std;

int n, ar[201],dp[201], mx;

int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&ar[i]);
    }
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<i;j++){
            if(ar[j]<ar[i]) dp[i]=Max(dp[j]+1,dp[i]);
			mx = Max(mx,dp[i]);
        }
    }
    printf("%d",n-mx);

}