#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int root[10001];
vector<array<int, 3>> sph;
vector<pair<double,pii>> edge;

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    x = find(x);
	y = find(y);
	if(x==y) return;
	if(x>y) root[y]=x;
	else root[x]=y;
}

double getlen(int f, int s){
    double ret = 0;
    if(sph[f][2] < sph[s][2]) swap(f,s);
    double dsq = (1.0*sph[f][0] - 1.0*sph[s][0])*(1.0*sph[f][0] - 1.0*sph[s][0]) + (1.0*sph[f][1] - 1.0*sph[s][1])*(1.0*sph[f][1] - 1.0*sph[s][1]);  
    double dfrsq = (1.0*sph[f][2] - 1.0*sph[s][2])*(1.0*sph[f][2] - 1.0*sph[s][2]);
    double h = sqrt(dsq - dfrsq);
    double d = sqrt(dsq);
    double dfr = 1.0*abs(sph[f][2] - sph[s][2]);
    ret += 2*h;
    double fang = acos(dfr/d);
    double sang = PI - fang;
    ret += (2*PI - 2*fang)*sph[f][2];
    ret += (2*PI - 2*sang)*sph[s][2];
    return ret;
}

int chk(int f, int s){
    double d = sqrt(1.0*(sph[f][0] - sph[s][0])*(sph[f][0] - sph[s][0]) + 1.0*(sph[f][1] - sph[s][1])*(sph[f][1] - sph[s][1]));  
    double rlen = 1.0*(sph[f][2] + sph[s][2]);
    if(d - rlen <= 0.0000001) return 1;
    return 0;
}

int main(){
    for(int i=0;i<10001;i++){
        root[i]=i;
    }
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int x,y,r;cin>>x>>y>>r;
        sph.push_back({x,y,r});
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(chk(i,j)) edge.push_back({0,{i,j}});
            else edge.push_back({getlen(i,j),{i,j}});
        }
    }
    sort(edge.begin(), edge.end());
    double ans = 0;
    for(auto e: edge){
        double len = e.first;
        int f = e.second.first;
        int s = e.second.second;
        if(find(f) != find(s)){
            ans += len;
            Union(f,s);
        }
    }
    cout<<fixed;
    cout.precision(10);
    cout<<ans;
}