#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
using namespace std;

vector<pair<char,char>> out;
char tc[5] = {0, 'A', 'B', 'C', 'D'};

void recur(int n, int from, int to, int other){
    if(n==0) return;
    recur(n-1, from, other, to);
    out.push_back({tc[from], tc[to]});
    recur(n-1, other, to, from);
}

int main(){
    int n;cin>>n;
    tc[1] = 'A';
    tc[2] = 'B';
    tc[3] = 'C';
    tc[4] = 'D';
    if(n==1) cout<<"1\nA D";
    else if(n==2) cout<<"3\nA B\nA D\nB D";
    //else if(n==3) cout<<"5\nA B\nA C\nA D\nC D\nB D";
    //else if(n==4) cout<<"9\nA B\nA C\nB C\nA B\nA D\nB D\nC B\nC D\nB D";
    else{
        int f = 1, t = 3, o = 2;
        for(int i=2;n-i>=0;i+=2){
            recur(n-i, f, t, o);
            if(n-i==1){
                out.push_back({tc[f], tc[o]});
                out.push_back({tc[f], tc[4]});
                out.push_back({tc[o], tc[4]});
                out.push_back({tc[t], tc[4]});
            }
            else{
                out.push_back({tc[f], tc[o]});
                out.push_back({tc[f], tc[4]});
                out.push_back({tc[o], tc[4]});
            }
            swap(f,t);
        }
        cout<<out.size()<<'\n';
        for(auto e: out) cout<<e.first<<' '<<e.second<<'\n';
    }
}