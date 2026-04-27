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

int main(){
    int n,q,c;cin>>n>>q>>c;
    int capa[2002];
    deque<int> back;
    deque<int> front;
    int cache = 0;
    int cur = 0;
    for(int i=1;i<=n;i++) cin>>capa[i];
    for(int i=0;i<q;i++){
        char task;cin>>task;
        int page;
        if(task=='A'){
            cin>>page;
            for(auto e: front) cache -= capa[e];
            front.clear();
            cache += capa[page];
            if(cur==0){
                cur = page;
            }
            else{
                back.push_back(cur);
                cur = page;
                while(cache > c){
                    cache -= capa[back.front()];
                    back.pop_front();
                }
            }
        }
        if(task=='B'){
            if(back.empty()) continue;
            else{
                front.push_back(cur);    
                cur = back.back();
                back.pop_back();
            }
        }
        if(task=='F'){
            if(front.empty()) continue;
            back.push_back(cur);
            cur = front.back();
            front.pop_back();
        }
        if(task=='C'){
            for(int j=0;j<back.size();j++){
                int idx = j;
                while(idx+1<back.size()&&back[idx]==back[idx+1]){
                    cache -= capa[back[idx]];
                    idx++;
                }
                j=idx;
            }
            back.erase(unique(back.begin(),back.end()),back.end());
        }
    }
    cout<<cur<<'\n';
    if(back.empty()) cout<<-1;
    else{for(int i=back.size()-1;i>=0;i--) cout<<back[i]<<' ';}
    cout<<'\n';
    if(front.empty()) cout<<-1;
    else{for(int i=front.size()-1;i>=0;i--) cout<<front[i]<<' ';}

}