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
    int arr[101][101];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        int bef = 0;
        int cur = 0;
        int is1 = 0;
        int is2 = 0;
        for(int j=0;j<m;j++){
            if(bef!=arr[i][j]){
                cur = arr[i][j];
                if(bef==0&&cur==1){
                    ans++;
                    is1 = 1;
                }
                if(bef==0&&cur==2){
                    ans++;
                    is2 = 1;
                }
                if(bef==1&&cur==2){
                    if(is2 == 0) ans++;
                    else is1 = 0;
                    is2 = 1;
                }
                if(bef==2&&cur==1){
                    if(is1 == 0) ans++;
                    else is2 = 0;
                    is1 = 1;
                }
                if(cur==0){
                    is1 = 0;
                    is2 = 0;
                }
            }
            bef = arr[i][j];
        }
    }
    cout<<ans;
}