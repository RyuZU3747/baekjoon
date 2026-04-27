#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n;
    char w;
    int arr[21][21];
    cin>>w>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int narr[21][21];
    switch (w)
    {
        case 'L':
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[j][i]==1||arr[j][i]==2||arr[j][i]==5||arr[j][i]==8){
                        if(arr[j][i]==1) narr[j][n-1-i] = 1;
                        else if(arr[j][i]==2) narr[j][n-1-i] = 5;
                        else if(arr[j][i]==5) narr[j][n-1-i] = 2;
                        else narr[j][n-1-i] = 8;
                    }
                    else narr[j][n-1-i] = 0;
                }
            }
            break;
        case 'R':
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[j][i]==1||arr[j][i]==2||arr[j][i]==5||arr[j][i]==8){
                        if(arr[j][i]==1) narr[j][n-1-i] = 1;
                        else if(arr[j][i]==2) narr[j][n-1-i] = 5;
                        else if(arr[j][i]==5) narr[j][n-1-i] = 2;
                        else narr[j][n-1-i] = 8;
                    }
                    else narr[j][n-1-i] = 0;
                }
            }
            break;
        case 'U':
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[i][j]==1||arr[i][j]==2||arr[i][j]==5||arr[i][j]==8){
                        if(arr[i][j]==1) narr[n-1-i][j] = 1;
                        else if(arr[i][j]==2) narr[n-1-i][j] = 5;
                        else if(arr[i][j]==5) narr[n-1-i][j] = 2;
                        else narr[n-1-i][j] = 8;
                    }
                    else narr[n-1-i][j] = 0;
                }
            }
            break;
        case 'D':
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(arr[i][j]==1||arr[i][j]==2||arr[i][j]==5||arr[i][j]==8){
                        if(arr[i][j]==1) narr[n-1-i][j] = 1;
                        else if(arr[i][j]==2) narr[n-1-i][j] = 5;
                        else if(arr[i][j]==5) narr[n-1-i][j] = 2;
                        else narr[n-1-i][j] = 8;
                    }
                    else narr[n-1-i][j] = 0;
                }
            }
            break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(narr[i][j]==0) cout<<"? ";
            else cout<<narr[i][j]<<' ';
        }
        cout<<'\n';
    }
}