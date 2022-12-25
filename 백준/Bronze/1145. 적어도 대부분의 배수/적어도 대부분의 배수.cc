#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    int ans = 1;
    while(1){
        int cnt = 0;
        if(ans%a==0) cnt++;
        if(ans%b==0) cnt++;
        if(ans%c==0) cnt++;
        if(ans%d==0) cnt++;
        if(ans%e==0) cnt++;
        if(cnt>=3){
            cout<<ans;
            return 0;
        }
        ans++;
    }
}