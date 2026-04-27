#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
    ll n;
    cin>>n;
    int len = 0;
    ll tmp = n;
    while(tmp!=0){
        tmp=tmp>>1;
        len++;
    }
    while(len){
        if(n&(1LL<<len-1)) cout<<1;
        else cout<<0;
        len--;
    }
}