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
    string su;
    while(1){
        cin>>su;
        int yb=1;
        if(su=="0") break;
        for(int i=0;i<su.length();i++){
            if(su[i]=='1') yb+=2;
            else if(su[i]=='0') yb+=4;
            else yb+=3;
            yb++;
        }
        cout<<yb<<'\n';
    }
}