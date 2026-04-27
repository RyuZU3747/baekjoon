#include <iostream>
using namespace std;

int main(){
    int _;cin>>_;
    while(_--){
        int n;cin>>n;
        int a=0,b=0,c=0;
        while(n>=25){
            n-=25;
            a++;
        }
        while(n>=10){
            n-=10;
            b++;
        }
        while(n>=5){
            n-=5;
            c++;
        }
        cout<<a<<' '<<b<<' '<<c<<' '<<n<<'\n';
        }
    }
      