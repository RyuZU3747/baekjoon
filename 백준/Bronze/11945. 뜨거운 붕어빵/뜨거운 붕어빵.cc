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
    int r,c;
    cin>>r>>c;
    char mp[11][11];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) cin>>mp[i][j];
    for(int i=0;i<r;i++) {for(int j=c-1;j>=0;j--) {cout<<mp[i][j];} cout<<'\n';}
    
}