#include <bits/stdc++.h>
using namespace std;

int main(){
   int s[5];
   int ans=0;
   for(int i=0;i<5;i++) scanf("%1d",&s[i]);
   for(int i=0;i<5;i++){
       ans += (s[i]*s[i]*s[i]*s[i]*s[i]);
   }
   cout<<ans;
}