#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int cnt = 0;
    while(1){
        string a;
        getline(cin,a);
        if(a.compare("0")==0) break;
        cnt++;
    }
    for(int i=1;i<=cnt;i++){
        cout<<"Case "<<i<<": Sorting... done!\n";
    }
}