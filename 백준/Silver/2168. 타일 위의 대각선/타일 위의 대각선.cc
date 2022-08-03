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

int gcd(int a, int b){return a%b==0 ? b : gcd(b,a%b);}

int main(){
    int x,y;
    cin>>x>>y;
    int ans = x-1+y+1 - gcd(x,y);
    cout<<ans;
}