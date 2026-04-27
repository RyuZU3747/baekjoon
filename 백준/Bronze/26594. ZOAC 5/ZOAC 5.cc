#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string a;
    cin>>a;
    int cnt = 1;
    for(int i=1;i<a.length();i++){
        if(a[i]==a[0]) cnt++;
        else break;
    }
    cout<<cnt;
}