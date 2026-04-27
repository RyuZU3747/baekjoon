#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int cmp(const void* a, const void*b){
    int a1 = *(int*)a;
    int a2 = *(int*)b; 
    if(a1>a2) return -1;
    else if(a1<a2) return 1;
    else return 0;
}

int main(){
    int k;
    cin>>k;
    for(int _=1;_<=k;_++){
        cout<<"Class "<<_<<'\n';
        int arr[51];
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>arr[i];
        qsort(arr,n,sizeof(int),cmp);
        int mx = 0;
        for(int i=0;i<n-1;i++){
            mx = Max(mx, abs(arr[i]-arr[i+1]));
        }
        cout<<"Max "<<arr[0]<<", Min "<<arr[n-1]<<", Largest gap "<<mx<<'\n';
    }
}