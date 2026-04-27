#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

int main(){
    string a;
    int b[27]={0,};
    cin>>a;
    for(int i=0;i<a.length();i++) b[a[i]-97]++;
    for(int i=0;i<26;i++) cout<<b[i]<<' ';
}