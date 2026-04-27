#include <iostream>
using namespace std;
int main(){
    long long int a;cin>>a;
    long long int s=1;
    for(int i=1;i<=a;i++) s *= i;
    cout<<s;
    }