#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a, b;cin>>a>>b;
    if((a+b)%2!=0||(a-(a+b)/2)<0){
        cout<<-1;
        return 0;
    }
    cout<<max((a+b)/2,a-(a+b)/2)<<' '<<min((a+b)/2,a-(a+b)/2);
}