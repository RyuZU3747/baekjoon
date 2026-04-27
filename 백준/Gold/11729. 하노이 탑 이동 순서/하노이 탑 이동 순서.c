#include <stdio.h>
#include <math.h>

void hanoi(int n, int from, int to,int oth){
  if(n<=1){
    printf("%d %d\n",from,to);
    return;
  }
  hanoi(n-1,from,oth,to);
  printf("%d %d\n",from,to);
  hanoi(n-1,oth,to,from);
}

int main(){
  int n;
  long long int cnt;
  scanf("%d",&n);
  cnt=pow(2,n)-1;
  if(n>20){
    printf("%lld\n",cnt);
  }
  
  else{
    printf("%lld\n",cnt);
    hanoi(n,1,3,2);
  }
}