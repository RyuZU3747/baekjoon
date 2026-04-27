#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int mp[111][111];

vector<int> sosu;
bool arr[1000001];

void getsosu(){
    arr[1]=1;
    for(int i=2;i*i<=1000000;i++){
        for(int j=i*i;j<=1000000;j+=i){
            arr[j]=1;
        }
    }
    for(int i=1;i<1000001;i++){
        if(arr[i]==0){
            sosu.push_back(i);
        }
    }
    return;
}

int main(){
    FASTIO;
    int n;cin>>n;
    getsosu();
    vector<int> su;
    for(int i=0;i<n*n;i++){
        for(int j=0;j<n*n;j++){
            cin>>mp[i][j];
            if(mp[i][j]!=0){
                su.push_back(mp[i][j]);
                arr[mp[i][j]] = 1;
                for(auto e:sosu){
                    if(e*2 > mp[i][j]) break;
                    if(mp[i][j] % e==0) arr[e] = 1;
                }
            }
        }
    }
    sosu.clear();
    for(int i=1;i<1000001;i++){
        if(arr[i]==0){
            sosu.push_back(i);
        }
    }
    int idx = 0;
    for(int i=0;i<n*n;i++){
        for(int j=0;j<n*n;j++){
            if(mp[i][j]==0) cout<<sosu[idx++]<<' ';
            else cout<<mp[i][j]<<' ';
        }
        cout<<'\n';
    }
}