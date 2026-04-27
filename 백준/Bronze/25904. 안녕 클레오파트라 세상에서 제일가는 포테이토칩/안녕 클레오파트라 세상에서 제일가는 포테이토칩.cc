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
    int n,x;
    cin>>n>>x;
    int ar[1001];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int j = x;
    for(int i=0;;i++){
        i%=n;
        if(ar[i]<j){
            cout<<i+1;
            break;
        }
        j++;
    }
}