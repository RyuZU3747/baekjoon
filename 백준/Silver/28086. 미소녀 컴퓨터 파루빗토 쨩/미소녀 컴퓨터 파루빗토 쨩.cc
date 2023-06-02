#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll a,b;
    char c;
    cin>>oct>>a>>c>>b;
    if(c=='+'){
        ll out = a+b;
        if(out<0) cout<<'-'<<oct<<-out;
        else cout<<oct<<out;
    }
    if(c=='*'){
        ll out = a*b;
        if(out<0) cout<<'-'<<oct<<-out;
        else cout<<oct<<out;
    }
    if(c=='/'){
        if(b==0) cout<<"invalid";
        else{
            ll out = floor(a*1.0/b);
            if(out < 0){
                cout<<'-'<<oct<<-out;
            }
            else cout<<oct<<out;
        }
    }
    if(c=='-'){
        ll out = a-b;
        if(out<0) cout<<'-'<<oct<<-out;
        else cout<<oct<<out;
    }
}