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
    vector<int> arr;
    int mn = 1234567890;
    int mx = -1;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp;cin>>tmp;
        arr.push_back(tmp);
        mn = min(mn,tmp);
        mx = max(mx,tmp);
    }
    cout<<2*(mx-mn);
}