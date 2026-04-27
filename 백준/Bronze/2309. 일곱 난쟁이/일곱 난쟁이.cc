#include <bits/stdc++.h>
using namespace std;

int hei[10];
int ans[7];
int flag, visited[10];

int comp(const void* a, const void*b){
    int a1 = *(int*)a;
    int a2 = *(int*)b;
    if(a1<a2) return -1;
    else if(a1>a2) return 1;
    else return 0;
}

void backtrac(int dep){
    if(dep==7){
        int sum=0;
        for(int i=0;i<7;i++) sum+=ans[i];
        if(sum==100){
            qsort(ans,7,sizeof(int),comp);
        for(int i=0;i<7;i++) cout<<ans[i]<<'\n';
        flag=1;
        }
        return;
    }
    for(int i=0;i<9;i++){
        if(flag) return;
        if(visited[i]) continue;
        visited[i]=1;
        ans[dep]=hei[i];
        backtrac(dep+1);
        visited[i]=0;
        ans[dep+1]=0;
    }
}

int main(){
    for(int i=0;i<9;i++) cin>>hei[i];
    backtrac(0);
}