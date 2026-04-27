#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    map<string, string> a;
    a["SONGDO"] = "HIGHSCHOOL";
    a["CODE"] = "MASTER";
    a["2023"] = "0611";
    a["ALGORITHM"] = "CONTEST";
    string b;cin>>b;
    cout<<a[b];
}