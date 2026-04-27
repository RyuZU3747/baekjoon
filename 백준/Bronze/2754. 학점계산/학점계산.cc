#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    char gr[3];
    cin>>gr;
    double ans;
    if(gr[0]=='A') ans = 4.0;
    if(gr[0]=='B') ans = 3.0;
    if(gr[0]=='C') ans = 2.0;
    if(gr[0]=='D') ans = 1.0;
    if(gr[1]=='+') ans += 0.3;
    if(gr[1]=='-') ans -= 0.3;
    if(gr[0]=='F') ans = 0.0;
    printf("%.1f", ans);
}