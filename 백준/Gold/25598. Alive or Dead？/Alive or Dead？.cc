#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dr[4] = {-1,1,0,0};
int dc[4] = {0,0,-1,1};
int mp[30][30];

struct zombie{
    int kind;
    int r,c;
    int di;
    ll spd;
};

int main(){
    vector<zombie> zom;
    int n;cin>>n;
    string o;cin>>o;
    int pr, pc;
    cin>>pr>>pc;
    int w;cin>>w;
    for(int i=0;i<w;i++){
        int a,b;cin>>a>>b;
        mp[a][b] = 1;
    }
    int z;cin>>z;
    for(int i=0;i<z;i++){
        zombie a;
        cin>>a.r>>a.c>>a.kind;
        char x;cin>>x;
        if(x=='U') a.di = 0;
        if(x=='D') a.di = 1;
        if(x=='L') a.di = 2;
        if(x=='R') a.di = 3;
        cin>>a.spd;
        zom.push_back(a);
    }
    int d;cin>>d;

    if(z == 0){
        cout<<"ALIVE!";
        return 0;
    }

    int ans = 0;
    int no = 0;
    for(int da = 0;da<min(d, (int)o.length());da++){
        int playerord;
        if(o[da]=='U') playerord = 0;
        else if(o[da]=='D') playerord = 1;
        else if(o[da]=='L') playerord = 2;
        else if(o[da]=='R') playerord = 3;
        else playerord = -1;
        if(playerord != -1){
            int nr = pr + dr[playerord];
            int nc = pc + dc[playerord];
            if(nr>0&&nr<=n&&nc>0&&nc<=n && mp[nr][nc] != 1){
                pr = nr;
                pc = nc;
            }
        }

        for(auto &curz: zom){
            if(curz.kind == 0){
                for(int i=0;i<curz.spd;i++){
                    int nr = curz.r + dr[curz.di];
                    int nc = curz.c + dc[curz.di];
                    if(nr==0||nr>n||nc==0||nc>n||mp[nr][nc]!=0){
                        curz.di ^= 1;
                        break;
                    }
                    curz.r = nr;
                    curz.c = nc;
                }
            }
            else{
                for(int i=0;i<curz.spd;i++){
                    int nr = curz.r + dr[curz.di];
                    int nc = curz.c + dc[curz.di];
                    if(mp[nr][nc] == 1) {
                        mp[nr][nc] = 0;
                        break;
                    }
                    else if(nr<1||nr>n||nc<1||nc>n){
                        break;
                    }
                    else{
                        curz.r = nr;
                        curz.c = nc;
                    }
                }
                        int mxwall = 0;
                        int up = 0;
                        int down = 0;
                        int left = 0;
                        int right = 0;
                        for(int cd = curz.r;cd>0;cd--){
                            if(mp[cd][curz.c]==1) up++;
                        }
                        for(int cd = curz.r;cd<n+1;cd++){
                            if(mp[cd][curz.c]==1) down++;
                        }
                        for(int cd = curz.c;cd>0;cd--){
                            if(mp[curz.r][cd]==1) left++;
                        }
                        for(int cd = curz.c;cd<n+1;cd++){
                            if(mp[curz.r][cd]==1) right++;
                        }
                        mxwall = max(mxwall, up);
                        mxwall = max(mxwall, down);
                        mxwall = max(mxwall, left);
                        mxwall = max(mxwall, right);
                        if(up == mxwall){
                            curz.di = 0;
                        }
                        else if(right == mxwall){
                            curz.di = 3;
                        }
                        else if(down == mxwall){
                            curz.di = 1;
                        }
                        else if(left == mxwall){
                            curz.di = 2;
                        }

            }
        }

        for(auto curz:zom){
            if(pr == curz.r && pc == curz.c){
                no = 1;
                ans = da + 1;
                break;
            }
        }
        if(no) break;
    }
    if(no == 1) cout<<ans<<'\n'<<"DEAD...";
    else cout<<"ALIVE!";
}