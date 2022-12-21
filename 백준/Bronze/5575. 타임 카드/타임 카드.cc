#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    for(int i=0;i<3;i++){
        int h1,m1,s1,h2,m2,s2;
        cin>>h1>>m1>>s1>>h2>>m2>>s2;
        int h = h2-h1, m = m2-m1, s = s2-s1;
        if(s<0){
            m--;
            s +=60;
        }
        if(m<0){
            h--;
            m +=60;
        }
        cout<<h<<' '<<m<<' '<<s<<'\n';
    }
}