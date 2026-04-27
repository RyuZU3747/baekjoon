#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int arr[51][51];
    int rmin = 1123456879;
    int cmin = 1123456879;
    int r,c;
    for(int i=1;i<n;i++){
        cin>>arr[i][1];
        if(arr[i][1]<rmin){
            rmin = arr[i][1];
            r = i;
            if(arr[i][1]==0){
                cout<<r<<' '<<1;
                return 0;
            }
        }
    }
    for(int i=1;i<=m;i++){
        cin>>arr[n][i];
        if(arr[n][i]<cmin){
            cmin = arr[n][i];
            c = i;
            if(arr[n][i]==0){
                cout<<n<<' '<<i;
                return 0;
            }
        }
    }
    cout<<r<<' '<<c;
}