#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a=1;
    while(1){
        cin>>a;
        if(a==0) break;
        int r= 0;
        for(int i=1;i<=a;i++){
            r += i;
        }
        cout<<r<<'\n';
    }
}