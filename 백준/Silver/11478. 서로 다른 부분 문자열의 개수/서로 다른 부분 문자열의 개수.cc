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
    set<string> substr;
    string str;
    cin>>str;
    int len = str.length();
    for(int i=0;i<len;i++){
        for(int j=0;j<=len-i;j++){
            substr.insert(str.substr(i,j));
        }
    }
    cout<<substr.size()-1;
}