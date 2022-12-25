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
    string name[151];
    int ini[27];
    memset(ini, 0, sizeof ini);
    for(int i=0;i<n;i++){
        cin>>name[i];
        ini[name[i][0]-'a']++;
    }
    int t = 0;
    for(int i=0;i<27;i++){
        if(ini[i]>=5){
            cout<<(char)(i+'a');
            t = 1;
        }
    }
    if(t==0) cout<<"PREDAJA";
}