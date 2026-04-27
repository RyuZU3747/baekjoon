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
    while(1){
        double a;
        cin>>a;
        if(a<0) break;
        cout<<fixed;
        cout.precision(2);
        cout<<"Objects weighing "<<a<<" on Earth will weigh "<<a*0.167<<" on the moon.\n";
    }
}