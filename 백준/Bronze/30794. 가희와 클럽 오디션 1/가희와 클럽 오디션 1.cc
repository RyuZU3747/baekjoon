#include <iostream>
using namespace std;

int main(){
    int a;cin>>a;
    string s;cin>>s;
    int ans = 0;
    if(s=="miss") ans = 0;
    else if(s=="bad") ans = a*200;
    else if(s=="cool") ans = a*400;
    else if(s=="great") ans = a*600;
    else ans = a*1000;
    cout<<ans;
}