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
    int a[2][5];
    for(int i=0;i<5;i++) cin>>a[0][i];
    for(int i=0;i<5;i++) cin>>a[1][i];
    int ans[2];
    ans[0] = a[0][0]*6+a[0][1]*3+a[0][2]*2+a[0][3]+a[0][4]*2;
    ans[1] = a[1][0]*6+a[1][1]*3+a[1][2]*2+a[1][3]+a[1][4]*2;
    cout<<ans[0]<<' '<<ans[1];
}