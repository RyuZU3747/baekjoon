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
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        __int128_t sum = 0;
        for(int j=0;j<t;j++){
            ll tmp;
            cin>>tmp;
            sum+=tmp;
        }
        if(sum>0) cout<<"+\n";
        else if(sum<0) cout<<"-\n";
        else cout<<"0\n";
    }
}