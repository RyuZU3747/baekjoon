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
    int x;
    int n;
    int sum = 0;
    cin>>x>>n;
    while(n--){
        int a, b;
        cin>>a>>b;
        sum += a*b;
    }
    if(x==sum) cout<<"Yes";
    else cout<<"No";
}