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
    int cur = 1;
    int inv = 0;
    for(int i=0;i<n;i++){
        string card; int t;
        cin>>card>>t;
        if(card.compare("HOURGLASS")==0&&t==cur){
            cout<<cur<<" NO\n";
            if(inv) cur--;
            else cur++;
            if(cur>12) cur = 1;
            if(cur<1) cur = 12;
        }
        else if(t==cur){
            cout<<cur<<" YES\n";
            if(inv) cur--;
            else cur++;
            if(cur>12) cur = 1;
            if(cur<1) cur = 12;
        }
        else if(card.compare("HOURGLASS")==0){
            cout<<cur<<" NO\n";
            if(inv) inv = 0;
            else inv = 1;
            if(inv) cur--;
            else cur++;
            if(cur>12) cur = 1;
            if(cur<1) cur = 12;
        }
        else{
            cout<<cur<<" NO\n";
            if(inv) cur--;
            else cur++;
            if(cur>12) cur = 1;
            if(cur<1) cur = 12;
        }
    }
}