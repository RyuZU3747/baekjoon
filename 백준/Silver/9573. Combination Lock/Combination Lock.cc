#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int j[3];
    set<int> jd[3];
    int m[3];
    set<int> md[3];
    for(int i=0;i<3;i++){
        cin>>j[i];
        jd[i].insert((j[i]-2 <= 0 ? j[i]-2+n : j[i]-2)%(n+1));
        jd[i].insert((j[i]-1 <= 0 ? j[i]-1+n : j[i]-1)%(n+1));
        jd[i].insert((j[i])%(n+1));
        jd[i].insert((j[i]+1 > n ? j[i]+1-n : j[i]+1)%(n+1));
        jd[i].insert((j[i]+2 > n ? j[i]+2-n : j[i]+2)%(n+1));
    }
    for(int i=0;i<3;i++){
        cin>>m[i];
        md[i].insert((m[i]-2 <= 0 ? m[i]-2+n : m[i]-2)%(n+1));
        md[i].insert((m[i]-1 <= 0 ? m[i]-1+n : m[i]-1)%(n+1));
        md[i].insert((m[i])%(n+1));
        md[i].insert((m[i]+1 > n ? m[i]+1-n : m[i]+1)%(n+1));
        md[i].insert((m[i]+2 > n ? m[i]+2-n : m[i]+2)%(n+1));
    }
    ll cnt = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if((jd[0].find(i)!=jd[0].end()&&jd[1].find(j)!=jd[1].end()&&jd[2].find(k)!=jd[2].end())||(md[0].find(i)!=md[0].end()&&md[1].find(j)!=md[1].end()&&md[2].find(k)!=md[2].end())){
                    cnt++;
                }
            }
        }   
    }
    cout<<cnt;
}