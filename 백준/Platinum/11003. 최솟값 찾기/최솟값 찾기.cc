#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,l;cin>>n>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    priority_queue<pii> q;
    for(int i=0;i<n;i++){
        q.push({-a[i],i});
        pii t = q.top();
        while(t.second <= i-l){
            q.pop();
            t = q.top();
        }
        cout<<-t.first<<' ';
    }
}