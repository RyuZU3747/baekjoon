#include <stdio.h>
int vps(char *str){
	int point=0;
	for(int i=0;str[i];i++){
		if(str[i]=='('){
			point++;
		}
		else if(str[i]==')'){
			if(point==0) return 0;
			else point--;
		}
		else{
			if(point!=0) return 0;
			else return 1;
		}
	}
	if(point!=0) return 0;
	return 1;
}
int main(){
	int t,a;
	char str[50];
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%s",str);
		
		if(vps(str)) printf("YES\n");
		else printf("NO\n");
	}
}