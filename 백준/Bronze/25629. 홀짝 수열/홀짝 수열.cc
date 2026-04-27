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
    int n;
    int arr[101];
    cin>>n;
    int odd = 0;
    int even = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2) odd++;
        else even++;
    }
    if(n%2){
        if(odd-1!=even) cout<<0;
        else cout<<1;
    }
    else{
        if(odd==even) cout<<1;
        else cout<<0;
    }
}