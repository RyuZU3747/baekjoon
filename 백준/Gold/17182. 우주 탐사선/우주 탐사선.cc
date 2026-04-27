#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    int mat[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j] = min(mat[i][j], mat[i][k] + mat[k][j]);
            }
        }
    }

    vector<int> planet;
    for(int i=0;i<n;i++) if(k!=i) planet.push_back(i);
    int ans = 1234567890;
    do{
        int st = k;
        int len = 0;
        for(auto e: planet){
            len += mat[st][e];
            st = e;
        }
        ans = min(ans, len);
    }while(next_permutation(planet.begin(), planet.end()));
    cout<<ans;
}