#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<string, int> dp;

int recur(string s){
    if(dp.find(s)!=dp.end()) return dp[s];
    int & ret = dp[s];
    ret = 1;
    int len = s.length();
    for(int i=1;i+i<len;i++){
        if(s.substr(0,i)==s.substr(i, i)) ret += recur(s.substr(i, len-i));
        if(s.substr(0,i)==s.substr(len-i, i)) ret += recur(s.substr(i, len-i));
        if(s.substr(len-i,i)==s.substr(len-i-i, i)) ret += recur(s.substr(0, len-i));
        if(s.substr(len-i,i)==s.substr(0, i)) ret += recur(s.substr(0, len-i));
    }
    ret %= 2014;
    return ret;
}

int main(){
    string s;cin>>s;
    cout<<(recur(s) + 2013)% 2014;
}