#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n;
    scanf("%d",&n);
    int ans = 0;
    for(int i=0;i<n;i++){
        int tmp;
        char c;
        scanf("%c%c%d",&c,&c,&tmp);
        if(tmp>=-90) ans++;
    }
    printf("%d",ans);
}