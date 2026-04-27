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
    string tmp;
    while(1){
        getline(cin,tmp,'\n');
        if(tmp=="#") break;
        int cnt=0;
        for(int i=0;i<tmp.length();i++){
            if(tmp[i]=='a'||tmp[i]=='e'||tmp[i]=='i'||tmp[i]=='o'||tmp[i]=='u'||tmp[i]=='A'||tmp[i]=='E'||tmp[i]=='I'||tmp[i]=='O'||tmp[i]=='U') cnt++;
        }
        cout<<cnt<<'\n';
    }
}