#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int x = 10,y = 10,z = -10,w = -10;
    while(n--){
        int a,b,c,d;cin>>a>>b>>c>>d;
        x = min(x, a);
        y = min(y, b);
        z = max(z, c);
        w = max(w, d);
        cout<<(z-x + w-y) * 2<<'\n';
    }
}