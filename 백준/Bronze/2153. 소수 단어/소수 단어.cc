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

vector<int> sosu;
bool arr[1000001];

void getsosu(){
    //arr[1]=1;
    for(int i=2;i*i<=1000000;i++){
        for(int j=i*i;j<=1000000;j+=i){
            arr[j]=1;
        }
    }
    for(int i=1;i<1000001;i++){
        if(arr[i]==0){
            sosu.push_back(i);
        }
    }
    return;
}

int main(){
    string a;
    cin>>a;
    int su = 0;
    getsosu();
    for(int i=0;i<a.length();i++){
        if(a[i]>=97) su+=a[i]-96;
        else su+=a[i]-65+27;
    }
    if(arr[su]==0) cout<<"It is a prime word.";
    if(arr[su]==1) cout<<"It is not a prime word.";
}