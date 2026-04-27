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
    int ans = 0;
    for(int i=0;i<n;i++){
        char a;
        cin>>a;
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u') ans++;
    }
    cout<<ans;
}