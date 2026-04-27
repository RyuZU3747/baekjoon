#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    pii p[n];
    int len[961];
    string ans[n];
    for(auto &x:p) cin>>x.first>>x.second;
    for(int i=0;i<n;i++){
        int corn = max(abs(p[i].first), abs(p[i].second));
        while(!(p[i].first == 0 && p[i].second == 0)){
            if(p[i].first >= 0 && p[i].second >= 0 && p[i].first == p[i].second+1){
                ans[i] += 'A';
                p[i].first--;
                corn--;
                if(corn == 0) break;
            }
            else if(p[i].second == corn){
                while(p[i].first != -corn){
                    p[i].first--;
                    ans[i] += 'A';
                }
                p[i].second--;
                ans[i] += 'X';
            }
            else if(p[i].first == -corn){
                while(p[i].second != -corn){
                    p[i].second--;
                    ans[i] += 'X';
                }
                p[i].first++;
                ans[i] += 'D';
            }
            else if(p[i].second == -corn){
                while(p[i].first != corn){
                    p[i].first++;
                    ans[i] += 'D';
                }
                p[i].second++;
                ans[i] += 'W';
            }
            else if(p[i].first == corn){
                while(p[i].second != corn-1){
                    p[i].second++;
                    ans[i] += 'W';
                }
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<'\n';
}