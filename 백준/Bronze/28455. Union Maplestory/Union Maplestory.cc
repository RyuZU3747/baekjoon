#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    sort(arr.begin(), arr.end(),[](int a, int b){return a > b;});
    int sum = 0;
    int stat = 0;
    for(int i=0;i<min(n,42);i++){
        sum += arr[i];
        if(arr[i] >= 250) stat += 5;
        else if(arr[i] >= 200) stat += 4;
        else if(arr[i] >= 140) stat += 3;
        else if(arr[i] >= 100) stat += 2;
        else if(arr[i] >= 60) stat += 1;
    }
    cout<<sum<<' '<<stat;
}