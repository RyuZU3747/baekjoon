#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;

int main(){
    int n,m;
    int color[3]={0,};//RGB
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
    }
    for(int i=0;i<m;i++){
        int a,b;
        char c;
        cin>>a>>b>>c;
        if(c=='R') color[0]++;
        else if(c=='G') color[1]++;
        else color[2]++;
    }
    for(int i=0;;i++){
        if(color[1]>0) color[1]--;
        else if(i%2==0){
            if(color[0]==0){
                cout<<"jhnan917";
                return 0;
            }
            color[0]--;
        }
        else{
            if(color[2]==0){
                cout<<"jhnah917";
                return 0;
            }
            color[2]--;
        }
    }
}