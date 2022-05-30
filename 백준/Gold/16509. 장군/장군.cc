#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int dx[8] = {-3,-3,-2,2,3,3,-2,2};
int dy[8] = {2,-2,3,3,2,-2,-3,-3};
queue<tuple<int,int,int>> q; //횟수 x y
int visited[10][10];

int main(){
    int y1,x1,y2,x2;
    cin>>y1>>x1>>y2>>x2;
    q.push(make_tuple(0,x1,y1));
    visited[x1][y1] = 1;
    while(!q.empty()){
        int x = get<1>(q.front());
        int y = get<2>(q.front());
        int cnt = get<0>(q.front());
        q.pop();
        if(x==x2&&y==y2){
            cout<<cnt;
            return 0;
        }
        for(int i=0;i<8;i++){
            int nextx = x+dx[i];
            int nexty = y+dy[i];
            if(visited[nextx][nexty]==1||nextx<0||nexty<0||nextx>8||nexty>9) continue;

            if(i<2){
                if(x-1==x2&&y==y2) continue;
                if(i==0&&x-2==x2&&y+1==y2) continue;
                if(i==1&&x-2==x2&&y-1==y2) continue;
            }
            else if(i<4){
                if(x==x2&&y+1==y2) continue;
                if(i==2&&x-1==x2&&y+2==y2) continue;
                if(i==3&&x+12==x2&&y+2==y2) continue;
            }
            else if(i<6){
                if(x+1==2&&y==y2) continue;
                if(i==4&&x+2==x2&&y+1==y2) continue;
                if(i==5&&x+2==x2&&y-1==y2) continue;
            }
            else{
                if(x==x2&&y-1==y2) continue;
                if(i==6&&x-1==x2&&y-2==y2) continue;
                if(i==7&&x+1==x2&&y-2==y2) continue;
            }
            
            visited[nextx][nexty] = 1;
            q.push(make_tuple(cnt+1,nextx,nexty));

        }
    }
}