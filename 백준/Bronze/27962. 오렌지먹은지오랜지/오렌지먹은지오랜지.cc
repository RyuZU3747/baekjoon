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
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=n-i-1;j<n;j++){
            if(s[j-n+i+1]!=s[j]) cnt++;
        }
        if(cnt==1){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}