#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int cnt[51][4];
int main(){
    int n,m;
    char arr[1001][51];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            if(arr[i][k]=='A'){
                cnt[k][0]++;
            }
            else if(arr[i][k]=='C'){
                cnt[k][1]++;
            }
            else if(arr[i][k]=='G'){
                cnt[k][2]++;
            }
            else if(arr[i][k]=='T'){
                cnt[k][3]++;
            }
        }
    }
    int len = 0;
    for(int i=0;i<m;i++){
        int tmp;
        tmp = Max(cnt[i][0],Max(cnt[i][1],Max(cnt[i][2],cnt[i][3])));
        if(tmp == cnt[i][0]) cout<<'A';
        else if(tmp == cnt[i][1]) cout<<'C';
        else if(tmp == cnt[i][2]) cout<<'G';
        else cout<<'T';
        len += (n-tmp);
    }
    cout<<'\n'<<len;
}