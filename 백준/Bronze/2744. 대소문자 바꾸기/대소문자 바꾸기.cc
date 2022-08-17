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
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]>=97) a[i]-=32;
        else a[i]+=32;
    }
    cout<<a;
}