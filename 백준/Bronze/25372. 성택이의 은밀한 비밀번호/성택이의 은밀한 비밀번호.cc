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
    cin>>n;
    while(n--){
        string a;
        cin>>a;
        if(a.length()>=6&&a.length()<=9) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
}