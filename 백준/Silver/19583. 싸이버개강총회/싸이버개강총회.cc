#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int s=0, e=0, q=0;
    string a, b, c;cin>>a>>b>>c;
    s = a[0]*600+a[1]*60+a[3]*10+a[4];
    e = b[0]*600+b[1]*60+b[3]*10+b[4];
    q = c[0]*600+c[1]*60+c[3]*10+c[4];
    set<string> name;
    int ans = 0;
    while(!cin.eof()){
        string time;cin>>time;
        string n;cin>>n;
        int t = time[0]*600+time[1]*60+time[3]*10+time[4];
        if(t<=s){
            name.insert(n);
        }
        if(e<=t&&t<=q){
            if(name.find(n)!=name.end()){
                name.erase(n);
                ans++;
            }
        }
    }
    cout<<ans;
}