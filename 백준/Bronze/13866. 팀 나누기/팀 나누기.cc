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
    vector<int> a(4);
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a.begin(),a.end());
    cout<<abs(a[0]+a[3]-a[1]-a[2]);
}