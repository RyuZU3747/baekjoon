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
    int n,s;cin>>n>>s;
    ll sco = 0;
    ll bef = 0;
    ll mp[200010];
    for(int i=1;i<=n;i++){
        cin>>mp[i];
    }
    mp[0] = -1234567891234567890;
    mp[n+1] = -1234567891234568790;
    int l = s;
    int r = s;
    int cnt = 0;
    while(1){
        ll sum = 0;
        bef = sco;
        int cr = r;
        int cl = l;
        while(l>=0){
            l--;
            sum += mp[l];
            if(sum > 0){
                sco += sum;
                break;
            }
            if(sco + sum < 0){
                l = cl;
                break;
            }
        }
        sum = 0;
        while(r<=n){
            r++;
            sum += mp[r];
            if(sum > 0){
                sco += sum;
                break;
            }
            if(sco + sum < 0){
                r = cr;
                break;
            }
        }
        if(bef==sco){
            cnt++;
            if(cnt==2){
                cout<<sco;
                break;
            }
        }
    }
}