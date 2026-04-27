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
    ll n;cin>>n;
    for(ll a=1;a<=n;a++){
        for(ll b=1;b<=n+2;b++){
            if(n%a==0&&(n+2)%b==0){
                ll c = n/a;
                ll d = -(n+2)/b;
                if(b*c+a*d==n+1){
                    cout<<a<<' '<<b<<' '<<c<<' '<<d;
                    exit(0);
                }
                else if(-b*c-a*d==n+1){
                    cout<<a<<' '<<-b<<' '<<c<<' '<<-d;
                    exit(0);
                }
            }
        }
    }
    cout<<-1;
}