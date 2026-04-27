#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    map<int,int> l;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a, b;
        cin>>a>>b;
        if(b==0){
            if(l[a]==0) ans++;
            l[a] = b;
        }
        else{
            if(l[a]==1) ans++;
            l[a] = b;
        }
    }
    for(int i=0;i<200001;i++){
        if(l[i]==1) ans++;
    }
    cout<<ans;
}