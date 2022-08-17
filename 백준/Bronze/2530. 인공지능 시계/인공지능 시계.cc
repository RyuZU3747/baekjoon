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
    int h,m,s;
    cin>>h>>m>>s;
    int time; cin>>time;
    int dh,dm,ds;
    dh = time/3600; time%=3600;
    dm = time/60; time%=60;
    ds = time;
    s+=ds;
    if(s>=60){
        m++;
        s-=60;
    }
    m+=dm;
    if(m>=60){
        h++;
        m-=60;
    }
    h+=dh;
    while(h>=24){
        h-=24;
    }
    cout<<h<<' '<<m<<' '<<s;
}