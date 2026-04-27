#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    arr[0] = n;
    for(int i=1;i<n;i++) arr[i] = i;
    for(auto e: arr) cout<<e<<' ';
}