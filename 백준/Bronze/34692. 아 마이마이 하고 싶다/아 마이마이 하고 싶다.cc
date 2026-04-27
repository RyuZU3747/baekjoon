#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;cin>>n>>m>>k;
    priority_queue<int> pq;
    for(int i=0;i<m;i++) pq.push(0);
    for(int i=0;i<n;i++){
        int a;cin>>a;
        int cur = pq.top();pq.pop();
        pq.push(-(-cur+a));

    }
    int t = -pq.top();
    if(t>k) cout<<"GO";
    else cout<<"WAIT";
}