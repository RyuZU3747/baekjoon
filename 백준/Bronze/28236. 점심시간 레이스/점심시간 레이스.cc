#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> ban;
    int mn = 1234567890;
    for(int i=0;i<k;i++){
        int f,d;cin>>f>>d;
        int len = f-1 + m-d+1;
        mn = min(mn,len);
        ban.push_back(len);
    }
    for(int i=0;i<k;i++){
        if(mn==ban[i]){
            cout<<i+1;
            break;
        }
    }
}