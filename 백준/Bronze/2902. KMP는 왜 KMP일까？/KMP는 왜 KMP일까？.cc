#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    char gr[101];
    cin>>gr;
    cout<<gr[0];
    for(int i=1;i<strlen(gr);i++){
        if(gr[i]=='-') cout<<gr[i+1];
    }
}