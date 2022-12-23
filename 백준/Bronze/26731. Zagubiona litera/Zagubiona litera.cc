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
    int ar[26];
    memset(ar, 0, sizeof ar);
    for(int i=0;i<a.length();i++){
        ar[a[i]-'A'] = 1;
    }
    for(int i=0;i<26;i++){
        if(ar[i]==0) cout<<(char)(i+'A');
    }
}