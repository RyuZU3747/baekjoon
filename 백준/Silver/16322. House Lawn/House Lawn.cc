#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int l,m;
    scanf("%d %d",&l,&m);
    vector<string> ans;
    int mnpr = 1234567980;
    for(int i=0;i<m;i++){
        char s[130];
        scanf(" %[^\n]s", s);
        char *p = strtok(s, ",");
        string name = p;
        ll P, C, T, R;
        p = strtok(NULL, ",");
        string t = p;
        P = stoi(t);
        p = strtok(NULL, ",");
        t = p;
        C = stoi(t);
        p = strtok(NULL, ",");
        t = p;
        T = stoi(t);
        p = strtok(NULL, ",");
        t = p;
        R = stoi(t);

        ll period = lcm((T+R), 10080LL);
        ll times = period / (T+R);
        ll week = period / 10080;
        ll Q = times * T * C;
        if(l * week <= Q){
            if(mnpr > P){
                ans.clear();
                ans.push_back(name);
                mnpr = P;
            }
            else if(mnpr==P) ans.push_back(name);
        }
    }
    if(ans.size() == 0){
        printf("no such mower");
    }
    else{
        for(auto e: ans){
            printf("%s\n", e.c_str());
        }
    }
}