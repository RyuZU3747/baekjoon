#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,c;cin>>a>>b>>c;
    long long int x = a/c, y = b/c;
    if(a%c) x++;
    if(b%c) y++;
    cout<<x*y;
}