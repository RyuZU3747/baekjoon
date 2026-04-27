#include <iostream>
using namespace std;

int main(){
    int a1,b1,a2,b2,a3,b3,h;
    cin>>a1>>b1>>a2>>b2>>a3>>b3>>h;
    int t = 0;
    while(1){
        if(t%a1==0) h-=b1;
        if(t%a2==0) h-=b2;
        if(t%a3==0) h-=b3;
        if(h<=0) break;
        t++;
    }
    cout<<t;
}