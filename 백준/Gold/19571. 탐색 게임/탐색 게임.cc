#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[101][101];
int main(){
    int su = 1;
    for(int x=0;x<100;x++){
        if(x%2==0){
            for(int i=x+1;i<100;i++){
                if(arr[x][i]!=0) continue;
                arr[x][i] = su++;
            }
            arr[x+1][99] = su++;
            for(int i=x+1;i<100;i++){
                if(arr[i][x]!=0) continue;
                arr[i][x] = su++;
            }
            arr[x][x] = su++;
        }
        else{
            for(int i=x+1;i<99;i++){
                if(arr[x][i]!=0) continue;
                arr[x][i] = su++;
            }
            arr[x+1][98] = su++;
            for(int i=x+1;i<100;i++){
                if(arr[i][x]!=0) continue;
                arr[i][x] = su++;
            }
            arr[x][x] = su++;
        }
    }

    arr[98][98] = 9994;
    arr[99][99] = 9998;
    arr[98][99] = 9999;
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++) cout<<arr[i][j]<<' ';
        cout<<'\n';
    }
}