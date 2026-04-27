#include <stdio.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char st[1000100];
		int cnt[27]={0,};
		scanf(" %s",st);
		int len = strlen(st);
		for(int i=0;i<len;i++){
			cnt[st[i]-65]++;
			if(cnt[st[i]-65]==3){
				cnt[st[i]-65]=0;
				if(st[i]!=st[i+1]){
					printf("FAKE\n");
					i++;
					break;
				}
				else i++;
			}
			if(i==len-1) printf("OK\n");
		}
	}
}