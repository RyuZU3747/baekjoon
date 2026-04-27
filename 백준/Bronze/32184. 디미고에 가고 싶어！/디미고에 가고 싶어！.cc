#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin>>a>>b;
    int ans = 1;
    if(a%2)
        a++;
    while(a<b){
        a += 2;
        ans++;
    }
    cout<<ans;
}