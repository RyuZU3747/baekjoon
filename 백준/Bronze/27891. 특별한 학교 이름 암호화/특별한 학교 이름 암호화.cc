#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string s;cin>>s;
    if(s[3]==s[8]) cout<<"KIS";
    else if(s[0]==s[6]) cout<<"SJA";
    else if(s[1]==s[6]) cout<<"NLCS";
    else cout<<"BHA";
}