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
    int ans = 0;
    cin>>n;
    int sum = 0;
    for(int i=1;i<1000;i++){
        sum += i;
        if(sum>n){
            if(i%2==1){
                cout<<sum-n;
                return 0;
            }
            else{
                cout<<0;
                return 0;
            }
        }
    }
}