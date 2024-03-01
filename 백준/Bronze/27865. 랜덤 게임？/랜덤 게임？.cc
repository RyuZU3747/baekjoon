#include <iostream>

using namespace std;
int main(){
    int n;cin>>n;
    for(int i=1;i<=19999;i++){
        char t;
        cout<<"? "<<1<<endl;
        cin>>t;
        if(t=='Y'){
            cout<<"! "<<1;
            return 0;
        }
    }
}