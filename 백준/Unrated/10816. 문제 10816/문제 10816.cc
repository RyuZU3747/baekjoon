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
cin.tie(0);
ios_base::sync_with_stdio(0);
    int arr[20000001]={0,};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp; cin>>tmp;
        arr[tmp+10000000]++;
    }
    int m; cin>>m;
    for(int i=0;i<m;i++){
        int tmp; cin>>tmp;
        cout<<arr[tmp+10000000]<<" ";
    }
}