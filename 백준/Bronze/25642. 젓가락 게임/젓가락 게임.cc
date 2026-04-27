#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/
 
int main(){
    int a,b;
    cin>>a>>b;
    while(a<5&&b<5){
        b = a+b;
        if(b>=5){
            cout<<"yt";
            return 0;
        }
        a += b;
        if(a>=5){
            cout<<"yj";
            return 0;
        }
    }
}