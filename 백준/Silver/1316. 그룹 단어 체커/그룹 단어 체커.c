#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int n,cnt=0,i;
	char v[101];
	scanf("%d",&n);
	for(int z=0;z<n;z++){
		scanf(" %[^\n]s",v);
    	int ch[27]={0};
		i=0;
	    	cnt++;
		do{
		    
			if(v[i]!=v[i-1]){
				if(ch[v[i]-97]==1) {
			        cnt--;
				    break;
				}
				else ch[v[i]-97]=1;
			}
	    	i++;
		}while(v[i]);
	}
	printf("%d",cnt);
}