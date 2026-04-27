#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int mp[11][11];
    string ship[11];
    for(int i=0;i<10;i++){
        ship[i] = "..........";
    }
    int r,c;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>mp[i][j];
            if(mp[i][j]==100){
                ship[i][j] = '#';
                r = i;
                c = j;
            }
        }
    }
    
    if(r < 5){
        ship[9] = "####.##.##";
        ship[7] = "##.###.###";
        if(r<=2) ship[4] = "#.#.#.....";
        else ship[0] = "#.#.#.....";
    }
    else{
        ship[2] = "####.##.##";
        ship[0] = "##.###.###";
        if(r<=7) ship[9] = "#.#.#.....";
        else ship[5] = "#.#.#.....";
    }
    for(int i=0;i<10;i++) cout<<ship[i]<<'\n';
}