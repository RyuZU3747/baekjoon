#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

char st[1000001];

int main(){
	char s[1000001], bomb[40];
	int p=0;
	scanf(" %[^\n]s",s);
	scanf(" %[^\n]s",bomb);
	int end = strlen(s);
	int len = strlen(bomb);
	for(int i=0;i<end;i++){
		int boom=1;
		st[p]=s[i];
		p++;
		while(boom){
			for(int j=1;j<=len;j++){
				if(p<len) boom=0;
				if(st[p-j]!=bomb[len-j]) boom=0;
			}
			if(boom==1) p-=len;
			if(p<=0){
				p=0;
				break;
			}
		}
	}
	if(p==0) printf("FRULA");
	else{
		for(int i=0;i<p;i++) printf("%c",st[i]);
	}
}