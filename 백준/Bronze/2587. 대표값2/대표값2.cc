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
    int arr[5], sum = 0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr+5);
    cout<<sum/5<<'\n';
    cout<<arr[2];
}