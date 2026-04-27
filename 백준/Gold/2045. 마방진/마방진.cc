#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int main(){
    vector<int> b[3];
    int allsum = 0;
    for(int i=0;i<3;i++){
        int x,y,z;cin>>x>>y>>z;
        b[i].push_back(x);
        b[i].push_back(y);
        b[i].push_back(z);
        allsum += x+y+z;
    }
    int sum = 0;
    if(b[0][0]!=0&&b[1][1]!=0&&b[2][2]!=0){
        sum = b[0][0]+b[1][1]+b[2][2];
    }
    if(b[2][0]!=0&&b[1][1]!=0&&b[0][2]!=0){
        sum = b[2][0]+b[1][1]+b[0][2];
    }
    for(int i=0;i<3;i++){
        if(b[i][0]!=0&&b[i][1]!=0&&b[i][2]!=0){
            sum = b[i][0] + b[i][1] + b[i][2];
            break;
        }
        if(b[0][i]!=0&&b[1][i]!=0&&b[2][i]!=0){
            sum = b[0][i] + b[1][i] + b[2][i];
            break;
        }
    }
    if(sum==0){
        sum = allsum/2;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int tmp = 0;
                if(b[i][j]==0){
                    for(int k=0;k<3;k++){
                        if(k==i) continue;
                        tmp += b[k][j];
                    }
                    b[i][j] = sum - tmp;
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cout<<b[i][j]<<' ';
            cout<<'\n';
        }
    }
    else{
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(b[i][j]==0){
                    int cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==i) continue;
                        if(b[k][j]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[0][j]+b[1][j]+b[2][j]);
                        break;
                    }
                    cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==j) continue;
                        if(b[i][k]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[i][0]+b[i][1]+b[i][2]);
                        break;
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(b[i][j]==0){
                    int cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==i) continue;
                        if(b[k][j]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[0][j]+b[1][j]+b[2][j]);
                        break;
                    }
                    cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==j) continue;
                        if(b[i][k]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[i][0]+b[i][1]+b[i][2]);
                        break;
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(b[i][j]==0){
                    int cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==i) continue;
                        if(b[k][j]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[0][j]+b[1][j]+b[2][j]);
                        break;
                    }
                    cnt = 0;
                    for(int k=0;k<3;k++){
                        if(k==j) continue;
                        if(b[i][k]==0) cnt++;
                    }
                    if(cnt==0){
                        b[i][j] = sum - (b[i][0]+b[i][1]+b[i][2]);
                        break;
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) cout<<b[i][j]<<' ';
            cout<<'\n';
        }
    }
}