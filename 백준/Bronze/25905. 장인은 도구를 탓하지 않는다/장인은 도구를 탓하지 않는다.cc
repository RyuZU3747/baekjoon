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

int main(){
    vector<double> ar;
    for(int i=0;i<10;i++){
        double tmp;cin>>tmp;
        ar.push_back(tmp);
    }
    sort(ar.begin(),ar.end());
    double ans = 1;
    for(int i=1;i<=9;i++){
        ans *= ar[i]/(double)i;
    }
    cout<<fixed;
    cout.precision(6);
    cout<<ans*1000000000;
}