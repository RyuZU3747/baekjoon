#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n;
    cin>>n;
    double arr[40001];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    double ans = arr[0];
    cout.precision(6);
    cout<<fixed;
    cout<<ans<<'\n';
    for(int i=1;i<n;i++){
        ans = (1-(1-(ans/100.0))*(1-(arr[i]/100.0)))*100;
        cout<<ans<<'\n';
    }
}