#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n, ans = 0;cin>>n;
    vector<string> arr(101);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        string a = arr[i];
        for(int j=i+1;j<n;j++){
            string b = arr[j];
            int sim = 1;
            int bta[27],atb[27];
            memset(bta, -1, sizeof bta);
            memset(atb, -1, sizeof atb);
            if(a.length()!=b.length()) continue;
            for(int k=0;k<a.length();k++){
                if(bta[b[k]-'a']==-1&&atb[a[k]-'a']==-1){
                    bta[b[k]-'a'] = a[k]-'a';
                    atb[a[k]-'a'] = b[k]-'a';
                }
                else{
                    if(bta[b[k]-'a'] != a[k]-'a' || atb[a[k]-'a'] != b[k]-'a'){
                        sim = 0;
                        break;
                    }
                }
            }
            if(sim) ans++;
        }
    }
    cout<<ans;
}