#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,f;cin>>n>>f;
    for(int i=0;i<100;i++){
        n /= 100;
        n *= 100;
        n += i;
        if(n%f==0){
            if(i<10) cout<<0;
            cout<<i;
            return 0;
        }
    }
}