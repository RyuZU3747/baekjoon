#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    int cnt = 1;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        if(s.compare("mumble")==0) cnt++;
        else{
            int t = stoi(s);
            if(cnt!=t){
                cout<<"something is fishy";
                return 0;
            }
            else cnt++;
        }
    }
    cout<<"makes sense";
}