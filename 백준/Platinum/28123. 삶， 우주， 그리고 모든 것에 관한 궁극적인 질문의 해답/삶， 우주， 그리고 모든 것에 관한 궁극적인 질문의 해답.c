int main(){
    long long int n,k,x;
    scanf("%lld %lld %lld",&n,&k,&x);
    if(x==1) n--;
    else if(x==2||x==3) n-=2;
    else if(x==4||x==5||x==6||x==7) n-=3;
    else n-=4;
    printf("%lld",(n+1)-3*(k-1)+(x==4||x==8||x==9));
}