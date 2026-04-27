#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int s=0, d=0;
    for(int i=0;i<a.length();i++){
        if(a[i]=='s') s++;
        if(a[i]=='d') d++;
    }
    if(s>d) cout<<"security!";
    else if(s<d) cout<<"bigdata?";
    else cout<<"bigdata? security!";
}