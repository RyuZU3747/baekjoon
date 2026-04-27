#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,k;cin>>n>>k;
    vector<int> arr(k);
    int degre[101];
    for(int i=0;i<=4;i++) degre[i] = 1;
    for(int i=5;i<=11;i++) degre[i] = 2;
    for(int i=12;i<=23;i++) degre[i] = 3;
    for(int i=24;i<=40;i++) degre[i] = 4;
    for(int i=41;i<=60;i++) degre[i] = 5;
    for(int i=61;i<=77;i++) degre[i] = 6;
    for(int i=78;i<=89;i++) degre[i] = 7;
    for(int i=90;i<=96;i++) degre[i] = 8;
    for(int i=97;i<=100;i++) degre[i] = 9;

    for(auto &x:arr){
        cin>>x;
        x *= 100;
        x /= n;
        x = degre[x];
        cout<<x<<' ';
    }
}