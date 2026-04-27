#include <bits/stdc++.h>
using namespace std;

int main(){
    int cy,cm,cd;
    scanf("%d-%d-%d", &cy, &cm, &cd);
    int n;
    scanf("%d",&n);
    int ans = 0;
    while(n--){
        int y,m,d;
        scanf("%d-%d-%d", &y, &m, &d);
        if(y < cy) continue;
        else if(y > cy) ans++;
        else{
            if(m < cm) continue;
            else if(m > cm) ans++;
            else{
                if(d < cd) continue;
                ans++;
            }
        }
    }
    printf("%d",ans);
}