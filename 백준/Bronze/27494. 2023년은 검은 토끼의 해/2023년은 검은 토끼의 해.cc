#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int ok(int n){
    string s = "2023";
    int idx = 0;
    string num = to_string(n);
    for(int i=0;i<num.length();i++){
        if(num[i]==s[idx]){
            idx++;
        }
    }
    if(idx==4) return 1;
    else return 0;
}

int main(){
    int n;cin>>n;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(ok(i)) ans++;
    }
    cout<<ans;
}