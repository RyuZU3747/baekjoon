#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;

/*------------------------------------------------------------*/

int main(){
cin.tie(0);
ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<min(a,min(b,c))<<'\n';
    }
}