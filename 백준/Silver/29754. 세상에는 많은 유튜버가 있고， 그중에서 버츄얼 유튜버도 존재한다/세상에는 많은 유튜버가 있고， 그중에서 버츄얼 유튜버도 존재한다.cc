#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;scanf("%d %d",&n,&m);
    char name[36401][21];
    map<string, int> cnt[54];
    map<string, int> time[54];
    int day[36401];
    int shh[36401];
    int ehh[36401];
    int smm[36401];
    int emm[36401];
    set<string> names;
    for(int i=0;i<n;i++){
        scanf("%s",&name[i]);
        scanf(" %d %d:%d %d:%d", &day[i], &shh[i],&smm[i],&ehh[i],&emm[i]);
        string stname(name[i]);
        names.insert(stname);
        int runtime = (ehh[i] - shh[i]) * 60 + (emm[i]-smm[i]);
        cnt[(day[i]-1)/7][stname]++;
        time[(day[i]-1)/7][stname] += runtime;
    }
    set<string> ans;
    for(auto nam : names){
        int yes = 1;
        for(int i=0;i<m/7;i++){
            if(cnt[i][nam] < 5) yes = 0;
            if(time[i][nam] < 3600) yes = 0;
        }
        if(yes) ans.insert(nam);
    }
    if(ans.empty()) cout<<-1;
    else for(auto e:ans) cout<<e<<'\n';
}