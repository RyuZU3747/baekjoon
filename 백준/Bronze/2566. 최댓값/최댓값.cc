#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    int arr[9][9],val, x, y;
    int max=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>arr[i][j];
            if(arr[i][j]>=max){
                val = arr[i][j];
                x = i;
                y = j;
                max = arr[i][j];
            }
        }
    }
    cout<<max<<'\n'<<x+1<<' '<<y+1;
}