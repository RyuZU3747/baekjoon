#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string cowp;
    string humm;
    cin>>cowp;
    cin>>humm;
    int i = 0, cnt = 0;
    while(i<humm.length()){
        for(int j=0;j<cowp.length();j++){
            if(humm[i]==cowp[j]) i++;
        }
        cnt++;
    }
    cout<<cnt;
}