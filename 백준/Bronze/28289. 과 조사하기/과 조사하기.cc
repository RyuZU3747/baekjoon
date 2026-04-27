#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    map<int,int> cnt;
    cnt[0] = 0;
    cnt[1] = 0;
    cnt[2] = 0;
    cnt[3] = 0;
    for(int i=0;i<n;i++){
        int g,c,d;cin>>g>>c>>d;
        if(g==1) cnt[3]++;
        else{
            if(c==1||c==2) cnt[0]++;
            else if(c==3) cnt[1]++;
            else if(c==4) cnt[2]++;
        }
    }
    for(auto e: cnt) cout<<e.second<<'\n';
}