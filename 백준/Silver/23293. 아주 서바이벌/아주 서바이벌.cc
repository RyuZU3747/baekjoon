#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

typedef struct log{
    int idx;
    int player;
    char beha;
    int ele1;
    int ele2;
}logs;

typedef struct player{
    int cur = 1;
    int item[55] = {0,};
}play;

logs lo[200001];
play p[100001];

int exec(logs a){//0 부정 1정상 2차단
    switch (a.beha){
        case 'M':
            p[a.player].cur = a.ele1;
            return 1;
            break;
        case 'F':
            p[a.player].item[a.ele1] += 1;
            if(p[a.player].cur != a.ele1) return 0;
            else return 1;
            break;
        case 'C':
            if(p[a.player].item[a.ele1] == 0 || p[a.player].item[a.ele2] == 0){
                p[a.player].item[a.ele1] -= 1;
                if(p[a.player].item[a.ele1] < 0) p[a.player].item[a.ele1] = 0;
                p[a.player].item[a.ele2] -= 1;
                if(p[a.player].item[a.ele2] < 0) p[a.player].item[a.ele2] = 0;
                return 0;
            }
            else{
                p[a.player].item[a.ele1] -= 1;
                p[a.player].item[a.ele2] -= 1;
                return 1;
            }
            break;
        case 'A':
            if(p[a.player].cur != p[a.ele1].cur) return 2;
            else return 1;
            break;
    }
}

int main(){
    int t, n;cin>>t>>n;
    for(int i=0;i<t;i++){
        cin>>lo[i].idx>>lo[i].player>>lo[i].beha;
        if(lo[i].beha=='C'){
            cin>>lo[i].ele1>>lo[i].ele2;
        }
        else cin>>lo[i].ele1;
    }
    set<int> bad;
    set<int> ban;
    for(int i=0;i<t;i++){
        int ret = exec(lo[i]);
        if(ret == 0||ret == 2){
            bad.insert(lo[i].idx);
            if(ret == 2){
                ban.insert(lo[i].player);
            }
        }
    }
    cout<<bad.size()<<'\n';
    for(auto i:bad){
        cout<<i<<' ';
    }
    if(bad.size()) cout<<'\n';
    cout<<ban.size()<<'\n';
    for(auto i: ban){
        cout<<i<<' ';
    }
}