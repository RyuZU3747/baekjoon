#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n,S,W,G;cin>>n>>S>>W>>G;
    vector<pii> Goldcard;
    int currentcard = 0;
    int currentpos = 0;
    vector<pii> Board;//0 st, 1 island, 2 money, 3 space, 4 normal, 5 Gold
    int receivemoney = 0;
    for(int i=0;i<G;i++){
        int a,b;cin>>a>>b;
        Goldcard.push_back({a,b});
    }
    Board.push_back({0,-1});
    for(int i=0;i<n-2;i++){
        char a;cin>>a;
        if(a=='G') Board.push_back({5,-1});
        else{
            int b;cin>>b;
            Board.push_back({4,b});
        }
    }
    Board.push_back({1,-1});
    for(int i=0;i<n-2;i++){
        char a;cin>>a;
        if(a=='G') Board.push_back({5,-1});
        else{
            int b;cin>>b;
            Board.push_back({4,b});
        }
    }
    Board.push_back({2,-1});
    for(int i=0;i<n-2;i++){
        char a;cin>>a;
        if(a=='G') Board.push_back({5,-1});
        else{
            int b;cin>>b;
            Board.push_back({4,b});
        }
    }
    Board.push_back({3,-1});
    for(int i=0;i<n-2;i++){
        char a;cin>>a;
        if(a=='G') Board.push_back({5,-1});
        else{
            int b;cin>>b;
            Board.push_back({4,b});
        }
    }
    int fail = 0;
    int boardsz = 4*n-4;
    int islandcnt = 0;
    int q;cin>>q;
    while(q--){
        int f, s;cin>>f>>s;
        if(Board[currentpos].first==1 && islandcnt < 3){
            islandcnt++;
            if(f==s){
                q--;
                cin>>f>>s;
                islandcnt = 0;
            }
            else continue;
        }
        if(islandcnt==3) islandcnt = 0;
        currentpos += f+s;
        while(currentpos >= boardsz){
            S += W;
            currentpos -= boardsz;
        }

        //황카
        if(Board[currentpos].first==5){
            int act = Goldcard[currentcard].first;
            int val = Goldcard[currentcard].second;
            currentcard++;
            if(currentcard == G) currentcard = 0;

            if(act==1) S += val;
            else if(act==2){
                S -= val;
                if(S < 0){
                    fail = 1;
                    break;
                }
            }
            else if(act==3){
                S -= val;
                receivemoney += val;
                if(S < 0){
                    fail = 1;
                    break;
                }
            }
            else currentpos += val;
        }
        while(currentpos >= boardsz){
            S += W;
            currentpos -= boardsz;
        }

        //복지기금
        if(Board[currentpos].first==2){
            S += receivemoney;
            receivemoney = 0;
        }
        //우주여행
        else if(Board[currentpos].first==3){
            currentpos = 0;
            S += W;
        }
        //일반칸
        else if(Board[currentpos].first==4){
            if(Board[currentpos].second != -1 && S >= Board[currentpos].second){
                S -= Board[currentpos].second;
                Board[currentpos].second = -1;
            }
        }
    }
    for(int i=0;i<boardsz;i++){
        if(Board[i].second != -1) fail = 1;
    }
    if(fail) cout<<"LOSE";
    else cout<<"WIN";
}