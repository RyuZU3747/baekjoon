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
    int a,b;
    cin>>a>>b;
    if(a<=60+b) cout<<a*1500;
    else{
        cout<<((60+b)*1500)+((a-60-b)*3000);
    }
}