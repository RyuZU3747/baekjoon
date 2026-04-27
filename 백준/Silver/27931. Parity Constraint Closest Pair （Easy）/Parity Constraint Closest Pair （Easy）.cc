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
    vector<int> ev;
    vector<int> od;
    vector<int> al;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(abs(a)%2==1){
            od.push_back(a);
            al.push_back(a);
        }
        else{
            ev.push_back(a);
            al.push_back(a);
        }
    }
    sort(ev.begin(),ev.end());
    sort(od.begin(),od.end());
    sort(al.begin(),al.end());
    int odd = 2100000001;
    int even = 2100000001;
    for(int i=1;i<n;i++){
        if(abs(al[i]-al[i-1]) % 2 == 1) odd = min(odd, abs(al[i]-al[i-1]));
    }
    for(int i=1;i<ev.size();i++){
        even = min(even, abs(ev[i]-ev[i-1]));
    }
    for(int i=1;i<od.size();i++){
        even = min(even, abs(od[i]-od[i-1]));
    }
    if(even == 2100000001) even = -1;
    if(odd == 2100000001) odd = -1;
    cout<<even<<' '<<odd;
}