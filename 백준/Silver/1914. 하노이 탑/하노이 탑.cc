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

void hanoi(int n, int from, int other, int go){
    if(n==1){
        cout<<from<<' '<<go<<'\n';
        return;
    }
    hanoi(n-1,from, go, other);
    cout<<from<<' '<<go<<'\n';
    hanoi(n-1,other, from, go);
}

int main(){
    int n;
    cin>>n;
    string st = to_string(pow(2,n));
    int end = st.find('.');
    st[end-1]-=1;
    cout<<st.substr(0,end)<<'\n';
    if(n<=20){
        hanoi(n,1,2,3);
    }
}