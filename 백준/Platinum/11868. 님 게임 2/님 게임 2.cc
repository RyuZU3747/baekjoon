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
    int n;
    cin>>n;
    int nimnum = 0;
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        nimnum ^= tmp;
    }
    if(nimnum==0) cout<<"cubelover";
    else cout<<"koosaga";
}