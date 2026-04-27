#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/
int main(){
    int n;
    int p;
    cin>>n>>p;
    int mn = p;
    if(n>=5){
        mn = min(mn,p-500);
        if(n>=10){
            mn = min(mn,p*9/10);
            if(n>=15){
                mn = min(mn,p-2000);
                if(n>=20){
                    mn = min(mn,p*75/100);
                }
            }
        }
    }
    if(mn<=0) cout<<0;
    else cout<<mn;
}