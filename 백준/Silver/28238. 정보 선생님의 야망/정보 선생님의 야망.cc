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
    int n;cin>>n;
    map<int,int> cnt;
    int su[10] = {3,5,9,17,6,10,18,12,20,24};
    for(int i=0;i<n;i++){
        int sum = 0;
        int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
        sum += a+b*2+c*4+d*8+e*16;
        for(auto e: su){
            if((sum & e)== e){
                cnt[e]++;
            }
        }
    }
    int mx = 0;
    int mxsu = 3;
    for(auto e:su){
        if(mx < cnt[e]){
            mx = cnt[e];
            mxsu = e;
        }
    }
    cout<<mx<<'\n';
    for(int i=0;i<5;i++){
        cout<<(mxsu>>i & 1)<<' ';
    }
}