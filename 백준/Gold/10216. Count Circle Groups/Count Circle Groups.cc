#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int root[3001];
int cordx[3001];
int cordy[3001];
int rad[3001];

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy) root[fx]=root[fy];
    else root[fy]=root[fx];
}

double distance(int i,int j){
    double ret;
    int dx = cordx[i]-cordx[j];
    int dy = cordy[i]-cordy[j];
    ret = sqrt(dx*dx+dy*dy);
    return ret;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int check[3001]={0,};
        for(int i=0;i<3001;i++){
            root[i]=i;
            cordx[i]=0;
            cordy[i]=0;
            rad[i]=0;
        }
        int n;
        cin>>n;
        int a,b,r;
        for(int i=0;i<n;i++){
            cin>>a>>b>>r;
            cordx[i]=a;
            cordy[i]=b;
            rad[i]=r;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) continue;
                if(distance(i,j)<=(rad[i]+rad[j])) Union(i,j);
            }
        }
        for(int i=0;i<n;i++){
            if(check[find(i)]==0){
                ans++;
                check[find(i)]=1;
            }
        }
        cout<<ans<<'\n';
    }
}