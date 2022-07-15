#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;

struct clas{
    int s;
    int t;
};

int cmp(const void* a1, const void* a2){
    clas a = *(clas*)a1;
    clas b = *(clas*)a2;
    if(a.s>b.s) return 1;
    else if(a.s<b.s) return -1;
    else return 0;
}

int main(){
    int n;
    cin>>n;
    clas c[200001];
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        cin>>c[i].s>>c[i].t;
    }
    qsort(c,n,sizeof(clas),cmp);
    q.push(-c[0].t);
    for(int i=1;i<n;i++){
        if(-q.top()>c[i].s){
            q.push(-c[i].t);
        }
        else{
            q.pop();
            q.push(-c[i].t);
        }
    }
    cout<<q.size();
}