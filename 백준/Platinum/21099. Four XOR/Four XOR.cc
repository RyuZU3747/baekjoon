#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

set<int> s;
int cnt = 3;
int n;
int a[100005];

int main(){
    scanf("%d", &n);
    if(n > 1000){
        printf("Yes");
        return 0;
    }
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        s.insert(a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int tmp = a[i]^a[j]^a[k];
                if(tmp == a[i] || tmp == a[j] || tmp == a[k]) continue;
                if(s.find(a[i]^a[j]^a[k]) != s.end()){
                    printf("Yes");
                    return 0;
                }
            }
        }
    }
    printf("No");
    /*
    a.insert(0);
    a.insert(1);
    a.insert(2);
    v.insert(1);
    v.insert(2);
    v.insert(3);
    s.insert(3);
    for(int i=3; i<=100000; i++){
        if(s.find(i) != s.end()) continue;
        cnt++;
        for(auto x : a){
            v.insert(x^i);
        }
        for(auto x : v){
            s.insert(x^i);
        }
        a.insert(i);
        if(cnt%100 == 0){
            printf("%d %d %d\n", cnt, i, s.size());
        }
    }
    for(auto x : a){
        printf("%d ", x);
    }
    printf("%d", cnt);
    */
}