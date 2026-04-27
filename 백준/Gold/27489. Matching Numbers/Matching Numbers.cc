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
    int _;cin>>_;
    while(_--){
        int n;cin>>n;
        if(n%2==0) cout<<"No\n";
        else{
            cout<<"Yes\n";
            vector<int> arr;
            arr.push_back(0);
            for(int i=n*2;i>=n;i-=2) arr.push_back(i);
            for(int i=n*2-1;i>=n;i-=2) arr.push_back(i);
            for(int i=1;i<=n;i++){
                cout<<i<<' '<<arr[i]<<'\n';
            }
        }
    }
}
