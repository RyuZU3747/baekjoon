#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int ans = 1234567;
    while(n--){
        int a,b,c;cin>>a>>b>>c;
        int t = a+b+c;
        if(t-512<0) continue;
        ans = min(ans, t-512);
    }
    if(ans>10000) cout<<-1;
    else cout<<512+ans;
}