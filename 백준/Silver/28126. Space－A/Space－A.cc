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
    string s;cin>>s;
    int ucnt = 0;
    int rcnt = 0;
    int xcnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') ucnt++;
        if(s[i]=='X') xcnt++;
        if(s[i]=='R') rcnt++;
    }
    int ans =0;
    int k;cin>>k;
    for(int i=0;i<k;i++){
        int x,y;cin>>x>>y;
        pii tmp = {x-1,y-1};
        int mndif = min(tmp.first, tmp.second);
        tmp.first -= min(xcnt, mndif);
        tmp.second -= min(xcnt, mndif);
        tmp.first -= rcnt;
        tmp.second -= ucnt;
        if(tmp.first<=0&&tmp.second<=0) ans++;
    }
    cout<<ans;
}