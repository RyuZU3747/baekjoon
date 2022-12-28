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
    int ar[6];
    int su[6] = {1,1,2,2,2,8};
    for(int i=0;i<6;i++) cin>>ar[i];
    for(int i=0;i<6;i++) cout<<su[i]-ar[i]<<" ";
}