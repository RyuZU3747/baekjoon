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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnts = 0;
    int cntt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='s') cnts++;
        else cntt++;
    }
    for(int i=0;i<n;i++){
        if(cnts==cntt){
            cout<<&s[i];
            return 0;
        }
        if(s[i]=='s') cnts--;
        else cntt--;
    }
}