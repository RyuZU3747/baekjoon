#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>arr[i][j];
    }
    int q;cin>>q;
    while(q--){
        int a;cin>>a;
        if(a==1){
            int b;cin>>b;
            int t = arr[b-1][n-1];
            for(int i=n-1;i>0;i--) arr[b-1][i] = arr[b-1][i-1];
            arr[b-1][0] = t;
        }
        else{
            int tmp[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
    tmp[j][n-i-1] = arr[i][j];
}
}
    for(int i=0;i<n;i++){
                for(int j=0;j<n;j++) arr[i][j] = tmp[i][j];
}
}
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<arr[i][j]<<' ';
        cout<<'\n';
    }
}