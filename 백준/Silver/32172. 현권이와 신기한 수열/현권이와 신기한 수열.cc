#include <bits/stdc++.h>
using namespace std;

set<int> chk;

int main(){
    int n;cin>>n;
    int arr[100001];
    chk.insert(0);
    arr[0] = 0;
    for(int i=1;i<100001;i++){
        int cur = arr[i-1];
        if(cur - i < 0 || chk.count(cur-i)) cur += i;
        else cur -= i;
        arr[i] = cur;
        chk.insert(cur);
    }
    cout<<arr[n];
}