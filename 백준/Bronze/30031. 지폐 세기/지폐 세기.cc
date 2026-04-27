#include <iostream>
using namespace std;

int main(){
    int a,b,n;cin>>n;
    int ans = 0;
    while(n--){
        cin>>a>>b;
        if(a==136) ans+=1000;
        else if(a==142) ans+=5000;
        else if(a==148) ans+=10000;
        else if(a==154) ans+=50000;
    }
    cout<<ans;
}