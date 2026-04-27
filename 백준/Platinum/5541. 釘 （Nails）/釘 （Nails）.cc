#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[5001][5001];

int main(){
    int n,m;cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,x;cin>>a>>b>>x;
        arr[a][b] = max(arr[a][b], x+1);
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            arr[i][j] = max(arr[i][j], max(arr[i-1][j]-1, arr[i-1][j-1]-1));
            if(arr[i][j]!=0) ans++;
        }
    }
    cout<<ans;
}