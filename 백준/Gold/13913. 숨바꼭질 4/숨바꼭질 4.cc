#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

queue<pii> q;
int visited[100001];
int parent[100001];
vector<int> path;

int main(){
    int n,k;
    cin>>n>>k;
    visited[n]=1;
    q.push(make_pair(n,0));
    while(!q.empty()){
        int x = q.front().first;
        int t = q.front().second;
        q.pop();
        if(x==k){
            cout<<t<<'\n';
            int i=x;
            while(i!=n){
                path.push_back(i);
                i = parent[i];
            }
            path.push_back(n);
            for(i=path.size()-1;i>=0;i--) cout<<path[i]<<' ';
            return 0;
        }
        if(2*x<100001&&visited[2*x]==0){
            int nx = x*2;
            int nt = t+1;
            parent[nx] = x;
            visited[nx] = 1;
            q.push(make_pair(nx,nt));
        }
        if(x-1>=0&&visited[x-1]==0){
            int nx = x-1;
            int nt = t+1;
            parent[nx] = x;
            visited[nx] = 1;
            q.push(make_pair(nx,nt));
        }
        if(x+1<100001&&visited[x+1]==0){
            int nx = x+1;
            int nt = t+1;
            parent[nx] = x;
            visited[nx] = 1;
            q.push(make_pair(nx,nt));
        }
    }
}