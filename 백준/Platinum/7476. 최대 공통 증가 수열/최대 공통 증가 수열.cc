#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int idx[501][501]; //i인덱스에서 길이j의 마지막인덱스
int arr1[501];
int arr2[501];

void recur(int i, int len){
    if(idx[i][len]!=-1){
        recur(idx[i][len], len-1);
        cout<<' ';
    }
    cout<<arr2[i];
}

int main(){
    int m1;cin>>m1;
    for(int i=0;i<m1;i++) cin>>arr1[i];
    int m2;cin>>m2;
    for(int i=0;i<m2;i++) cin>>arr2[i];

    int maxlen[501];
    memset(maxlen, 0, sizeof maxlen);
    for(int i=0;i<m1;i++){
        int len = 0;
        int p = -1;
        for(int j=0;j<m2;j++){
            if(arr1[i]==arr2[j]){
                if(len + 1 > maxlen[j]){
                    maxlen[j] = len + 1;
                    idx[j][maxlen[j]] = p;
                }
            }
            else if(arr1[i] > arr2[j]){
                if(len < maxlen[j]){
                    len = maxlen[j];
                    p = j;
                }
            }
        }
    }
    int mxlen = 0;
    int st = 1;
    for(int i=0;i<m2;i++){
        if(mxlen < maxlen[i]){
            mxlen = maxlen[i];
            st = i;
        }
    }
    cout<<mxlen<<'\n';
    // for(int i=0;i<=34;i++){
    //     for(int j=0;j<=34;j++) cout<<idx[i][j]<<' ';
    //     cout<<'\n';
    // }
    if(mxlen > 0){
        recur(st,mxlen);
    }
}