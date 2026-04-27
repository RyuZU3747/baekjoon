#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m;cin>>n>>m;
    long long int t = n*m;
    if(t%2) t--;
    cout<<t/2;    
}