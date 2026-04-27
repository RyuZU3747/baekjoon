#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    int su[10]={0,};
    int n;
    cin>>n;
    while(n){
        int tmp = n%10;
        if(tmp == 9||tmp == 6){
            if(su[9]>su[6]) su[6]++;
            else su[9]++;
        }
        else su[tmp]++;
        n/=10;
    }
    int mx = 0;
    for(int i=0;i<=9;i++) mx = Max(mx,su[i]);
    cout<<mx;
}