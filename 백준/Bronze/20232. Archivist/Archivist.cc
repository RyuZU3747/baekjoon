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
    int a;
    cin>>a;
    if(a==2018||a==2013||a==2008||a==2007||a==2000||a==1997||a==1996) cout<<"SPbSU";
    else if(a==2006) cout<<"PetrSU, ITMO";
    else cout<<"ITMO";
}