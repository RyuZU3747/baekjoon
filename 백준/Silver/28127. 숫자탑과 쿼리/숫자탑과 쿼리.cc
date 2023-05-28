#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int a,d,x;cin>>a>>d>>x;
        int t = x;
        int it = a;
        int f = 1;
        while(t > it){
            t -= it;
            it += d;
            f++;
        }   
        cout<<f<<' '<<t<<'\n';
    }
}