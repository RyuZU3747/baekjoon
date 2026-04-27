#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string s;cin>>s;
    int cnt[6] = {0,};
    for(int i=0;i<s.length();i++){
        if(s[i]=='M') cnt[0]++;
        if(s[i]=='O') cnt[1]++;
        if(s[i]=='B') cnt[2]++;
        if(s[i]=='I') cnt[3]++;
        if(s[i]=='S') cnt[4]++;
    }
    for(int i=0;i<5;i++){
        if(cnt[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}