#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,f=0;
	int* s,*c,*l;
	scanf("%d", &n);
	s = (int *)malloc(sizeof(int)*n);
	c = (int *)malloc(sizeof(int)*n);
	l = (int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&s[i],&c[i],&l[i]);
	}
	for(int i=1;i<n;i++){
		if(s[f]<s[i]) f=i;
		else if(s[f]==s[i]){
			if(c[f]>c[i]) f=i;
			else if(c[f]==c[i]){
				if(l[f]>l[i]) f=i;
			}
		}
	}
	printf("%d",f+1);
	free(s);
	free(c);
	free(l);
}