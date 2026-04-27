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
    while(n--){
        ll m;cin>>m;
        if(m&1){
            m--;
            ll cnt = 0;
            while(m){
                m/=2;
                cnt++;
            }
            cout<<0<<' '<<cnt-1<<'\n';
        }
        else{
            int cnt1 = 0;
            while((m&1)==0){
                m/=2;
                cnt1++;
            }
            m--;
            int cnt2 = 0;
            while(m){
                m/=2;
                cnt2++;
            }
            if(cnt2==0){
                cout<<cnt1-1<<' '<<cnt1-1<<'\n';
            }
            else cout<<cnt1<<' '<<cnt2+cnt1-1<<'\n';
        }
    }
}