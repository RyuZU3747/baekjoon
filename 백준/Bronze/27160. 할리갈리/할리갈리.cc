#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    map<string,int> card;
    for(int i=0;i<n;i++){
        string tmp; int su;
        cin>>tmp>>su;
        card[tmp] += su;
    }
    int flag = 0;
    for(auto x: card){
        if(x.second==5) flag = 1;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
}