#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

struct student{
    ll ju;
    ll sim;
    bool selec = false;
};

int cmp(const void *a, const void *b){
    student a1 = *(student*)a;
    student a2 = *(student*)b;
    if(a1.sim<a2.sim) return 1;
    else if(a1.sim>a2.sim) return -1;
    return 0;
}

int cmp2(const void *a, const void *b){
    student a1 = *(student*)a;
    student a2 = *(student*)b;
    if(a1.ju<a2.ju) return 1;
    else if(a1.ju>a2.ju) return -1;
    return 0;
}

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    ll sum = 0;
    student stu[200001];
    for(int i=0;i<n;i++){
        cin>>stu[i].ju>>stu[i].sim;
    }
    qsort(stu, n, sizeof(student), cmp);
    for(int i=0;i<k;i++){
        sum+=stu[i].ju;
        stu[i].selec = true;
    }
    qsort(stu, n, sizeof(student), cmp2);
    int cnt = 0;
    int i = 0;
    for(;;){
        if(cnt==m||i>=n) break;
        if(stu[i].selec == false){
            sum += stu[i].ju;
            cnt++;
            i++;
        }
        else i++;
    }
    cout<<sum;
}