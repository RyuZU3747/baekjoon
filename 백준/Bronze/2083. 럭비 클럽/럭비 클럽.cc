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
        string a;
        int b,c;
        cin>>a>>b>>c;
        if(a=="#") break;
        cout<<a<<" ";
        if(b>17||c>=80) cout<<"Senior\n";
        else cout<<"Junior\n";
    }
}