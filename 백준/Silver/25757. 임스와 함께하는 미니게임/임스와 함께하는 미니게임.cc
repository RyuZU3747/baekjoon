#include <bits/stdc++.h>
#include <algorithm>
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
    set<string> s;
    int n;
    char k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        s.insert(tmp);
    }
    int su = 0;
    for(auto i: s){
        su++;
    }
    if(k=='Y'){
        cout<<su;
    }
    else if(k=='F'){
        cout<<su/2;
    }
    else{
        cout<<su/3;
    }
}