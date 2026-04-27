#include <stdio.h>

int main(){
	int t,s,c;
	char a[81];
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%s",&a);
		s=0;
		c=0;
		for(int j=0;a[j]!='0';j++){
			if(a[j]=='O'){
				c+=1;
				s+=c;
			}
			else if(a[j]=='X') c=0;
			else break;
		}
		printf("%d\n",s);
	}
}