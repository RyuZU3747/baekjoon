#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
//2477
/*------------------------------------------------------------*/

int visited[1000001];
queue<pii> q;//수,거리

int main(){
    int a,k;
    cin>>a>>k;
    q.push(make_pair(a,0));
    while(!q.empty()){
        int c = q.front().first;
        int len = q.front().second;
        q.pop();
        if(c==k){
            cout<<len;
            return 0;
        }
        int nc = c*2;
        if(nc<=k&&visited[nc]==0){
            visited[nc]=1;
            q.push(make_pair(nc,len+1));
        }
        nc = c+1;
        if(nc<=k&&visited[nc]==0){
            visited[nc]=1;
            q.push(make_pair(nc,len+1));
        }
    }
}