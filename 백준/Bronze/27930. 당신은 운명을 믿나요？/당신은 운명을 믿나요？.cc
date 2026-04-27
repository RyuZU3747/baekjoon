#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	string s;cin>>s;
    string k = "KOREA";
    string y = "YONSEI";
    int ki = 0, yi = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]==k[ki]) ki++;
        if(s[i]==y[yi]) yi++;
        if(ki==5||yi==6) break;
    } 
    if(ki==5) cout<<"KOREA";
    else cout<<"YONSEI";
}