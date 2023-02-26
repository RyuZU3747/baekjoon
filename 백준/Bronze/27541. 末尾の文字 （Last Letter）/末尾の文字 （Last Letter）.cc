#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    if(s[s.length()-1]!='G') cout<<s<<'G';
    else{
        for(int i=0;i<n-1;i++) cout<<s[i];
    }
}