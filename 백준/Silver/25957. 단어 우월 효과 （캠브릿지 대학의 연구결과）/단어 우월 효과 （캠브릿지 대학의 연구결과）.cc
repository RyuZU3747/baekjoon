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
    map<int, string> str;
    map<string, int> schidx;
    for(int i=0;i<n;i++){
        string a; cin>>a;
        str[i] = a;
        if(a.length()>3) sort(a.begin()+1, a.end()-1);
        schidx[a] = i;
    }
    int m;cin>>m;
    for(int i=0;i<m;i++){
        string a; cin>>a;
        if(a.length()>3) sort(a.begin()+1, a.end()-1);
        cout<<str[schidx[a]]<<" ";
    }
}