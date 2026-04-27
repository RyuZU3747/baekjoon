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
    int a[3];
    int sum = 0;
    for(int i=0;i<3;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum>=100) cout<<"OK";
    else{
        int m = min(a[0],min(a[1],a[2]));
        if(m==a[0]) cout<<"Soongsil";
        else if(m==a[1]) cout<<"Korea";
        else cout<<"Hanyang";
    }
}