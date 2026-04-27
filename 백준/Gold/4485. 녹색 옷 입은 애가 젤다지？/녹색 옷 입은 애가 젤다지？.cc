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

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(){
    for(int _=1;;_++){
        int n;
        cin>>n;
        if(n==0) break;
        priority_queue<iii> pq; //골드 행 열
        int dist[126][126];
        for(int i=0;i<n;i++){     
            for(int j=0;j<n;j++) dist[i][j] = 123456789;
        }
        int mp[126][126];
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                cin>>mp[r][c];
            }
        }

        pq.push(make_tuple(-mp[0][0],0,0));
        dist[0][0] = mp[0][0];
        while(!pq.empty()){
            int w = -get<0>(pq.top());
            int cr = get<1>(pq.top());
            int cc = get<2>(pq.top());
            pq.pop();
            for(int i=0;i<4;i++){
                int nr = cr + dr[i];
                int nc = cc + dc[i];
                int nw = w + mp[nr][nc];
                if(nr>=0&&nr<n&&nc>=0&&nc<n&&dist[nr][nc]>nw){
                    dist[nr][nc] = nw;
                    pq.push(make_tuple(-dist[nr][nc],nr,nc));
                }
            }
        }
        
        cout<<"Problem "<<_<<": "<<dist[n-1][n-1]<<'\n';
    }
}