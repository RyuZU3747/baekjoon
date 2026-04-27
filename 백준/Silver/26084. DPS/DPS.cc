#include <iostream>
using namespace std;
int su[27];
int cnt[27];
int main(){
    string name;
    std::cin>>name;
    int n;std::cin>>n;
    while(n--){
        string tmp;
        cin>>tmp;
        su[tmp[0]-'A']++;
    }
    long long int ans = 1,div = 1;
    for(int i=0;i<3;i++) ans *= su[name[i]-'A']--;
    for(int i=0;i<3;i++) div *= ++cnt[name[i]-'A'];
    std::cout<<ans/div;
}