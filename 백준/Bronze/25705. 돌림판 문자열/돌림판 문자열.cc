#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n,m;
    string dol, s;
    cin>>n;
    cin>>dol;
    cin>>m;
    cin>>s;
    int cnt = 0;
    int dolp = dol.length()-1;
    int mod = dol.length();
    for(int i=0;i<m;i++){
        for(int k=0;k<n;k++){
            dolp++;
            dolp %= mod;
            cnt++;
            if(s[i]==dol[dolp]) break;
        }
        if(s[i]!=dol[dolp]){
            cout<<"-1";
            return 0;
        }

    }
    cout<<cnt;
}