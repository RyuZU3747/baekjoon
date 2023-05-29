#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int cnt = 1;
    for(int i=1;i<n;i++){
        string t = to_string(i);
        for(int j=0;j<t.length();j++){
            if(t[j]=='5'&&t[j+1]=='0'){
                cnt++;
                break;
            }
        }
        cnt++;
    }
    cout<<cnt;
}