#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int fix[3];
int cnt[7];
string jok;
int ans;

void backtrac(int len){
    if(len==2){
        for(int i=0;i<6;i++){
            if(jok[i]=='Y'){
                ans = max(ans,cnt[i+1]*(i+1));
            }
        }
        if(jok[6]=='Y'){ //포카
            for(int i=1;i<=6;i++){
                if(cnt[i]>=4) ans = max(ans,i*4);
            }
        }
        if(jok[7]=='Y'){ //풀하
            for(int i=1;i<=6;i++){
                if(cnt[i]==2){
                    for(int j=1;j<=6;j++){
                        if(cnt[j]==3) ans = max(ans, i*2+j*3);
                    }
                }
            }
        }
        if(jok[8]=='Y'){ //ss
            if(cnt[1]>=1&&cnt[2]>=1&&cnt[3]>=1&&cnt[4]>=1&&cnt[5]>=1){
                ans = max(ans, 30);
            }
        }
        if(jok[9]=='Y'){ //bs
            if(cnt[6]>=1&&cnt[2]>=1&&cnt[3]>=1&&cnt[4]>=1&&cnt[5]>=1){
                ans = max(ans, 30);
            }
        }
        if(jok[10]=='Y'){
            for(int i=1;i<=6;i++){
                if(cnt[i]==5) ans = max(ans,50);
            }
        }
        if(jok[11]=='Y'){
            int tmp = 0;
            for(int i=1;i<=6;i++){
                tmp += cnt[i]*i;
            }
            ans = max(ans, tmp);
        }
        return;
    }
    for(int i=1;i<=6;i++){
        cnt[i]++;
        backtrac(len+1);
        cnt[i]--;
    }
}

int main(){
    FASTIO;
    cin>>jok;
    for(int i=0;i<3;i++){
        cin>>fix[i];
        cnt[fix[i]]++;
    }
    backtrac(0);
    cout<<ans;
}