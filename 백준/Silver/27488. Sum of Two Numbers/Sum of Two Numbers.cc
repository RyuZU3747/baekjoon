#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll s(int a){
    ll s = 0;
    while(a){
        s += a%10;
        a /= 10;
    }
    return s;
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        ll n;cin>>n;
        vector<int> a;
        vector<int> b;
        int acnt = 0;
        int bcnt = 0;
        string t = to_string(n);
        for(int i=0;i<t.length();i++){
            int cur = n%10;
            n /= 10;
            if(cur%2==0){
                a.push_back(cur/2);
                b.push_back(cur/2);
            }
            else{
                if(acnt==bcnt){
                    a.push_back(cur/2);
                    b.push_back(cur/2+1);
                    acnt++;
                }
                else if(acnt>bcnt){
                    a.push_back(cur/2+1);
                    b.push_back(cur/2);
                    bcnt++;
                }
            }
        }
        string aa = "",bb = "";
        for(int i = a.size()-1;i>=0;i--) aa += ((char)(a[i]+'0'));
        for(int i = b.size()-1;i>=0;i--) bb += ((char)(b[i]+'0'));
        cout<<stoi(aa)<<' '<<stoi(bb)<<'\n';
    }
}