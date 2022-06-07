#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
    int h,m,kan[6],l;
    scanf("%d:%d",&h,&m);
    for(int i=0;i<6;i++) cin>>kan[i];
    cin>>l;
    for(int i=0;i<l;i++){
        float time;
        char order[6];
        scanf(" %f %[^\n]s",&time,order);
        if(order[0]=='^'){
            kan[int(floor(h/2))] = 0;
        }
        else if(order[0]=='1'&&order[1]=='0'){
            m+=10;
        }
        else if(order[0]=='3'&&order[1]=='0'){
            m+=30;
        }
        else if(order[0]=='5'&&order[1]=='0'){
            m+=50;
        }
        else if(order[0]=='2'){
            h+=2;
        }
        else if(order[0]=='4'){
            h+=4;
        }
        else if(order[0]=='9'){
            h+=9;
        }

        if(m>=60){
            h++;
            m-=60;
        }
        if(h>=12){
            h-=12;
        }
    }
    int ans = 0;
    for(int i=0;i<6;i++) ans+=kan[i];
    if(ans>100) ans=100;
    cout<<ans;
}