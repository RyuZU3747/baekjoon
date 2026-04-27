#include <iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int ans = 0;
    for(int i =0;i<n;i++){
        int t;cin>>t;
        ans+=t;
        if(i!=n-1) ans+=8;
    }
    cout<<ans/24<<' '<<ans%24;
}