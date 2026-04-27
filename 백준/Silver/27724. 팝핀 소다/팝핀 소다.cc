#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int get2(int n){
    int cnt = 0;
    while(n){
        n/=2;
        cnt++;
    }
    return cnt-1;
}

int main(){
    int n,m,k;cin>>n>>m>>k;
    int mx = get2(n);
    if(m>=mx){
        cout<<mx;
        return 0;
    }
    int cnt = 0;
    while(k!=1){
        k/=2;
        cnt++;
    }
    cout<<min(mx,cnt+m);
}