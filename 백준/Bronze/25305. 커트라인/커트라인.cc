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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(auto &x:arr){
        cin>>x;
    }
    sort(arr.begin(),arr.end(),[](int i, int j){return j<i;});
    cout<<arr[k-1];
}