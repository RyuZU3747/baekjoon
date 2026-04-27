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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a==8||a==9)&&b==c&&(d==8||d==9)){
        cout<<"ignore";
    }
    else cout<<"answer";
}