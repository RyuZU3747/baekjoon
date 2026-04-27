#include <stdio.h>

int main() {
	char s[5001];
	int end;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++){
		end = i;
	}
	for(int i=0;i<=end;i++){
		if(end%2==0){
			if(s[end/2]!='O'&&s[end/2]!='A'&&s[end/2]!='H'&&s[end/2]!='I'&&s[end/2]!='M'&&s[end/2]!='T'&&s[end/2]!='U'&&s[end/2]!='V'&&s[end/2]!='W'&&s[end/2]!='X'&&s[end/2]!='Y'&&s[end/2]!='i'&&s[end/2]!='l'&&s[end/2]!='m'&&s[end/2]!='n'&&s[end/2]!='o'&&s[end/2]!='u'&&s[end/2]!='v'&&s[end/2]!='w'&&s[end/2]!='x'&&s[end/2]!='0'&&s[end/2]!='1'&&s[end/2]!='8'){
				if(s[end/2]=='L') s[end/2]='l';
				else if(s[end/2]=='t') s[end/2]='T';
				else if(s[end/2]=='y') s[end/2]='Y';
				else if(s[end/2]=='h') s[end/2]='H';
				else if(s[end/2]=='a') s[end/2]='A';
				else if(s[end/2]=='N') s[end/2]='n';
				else{
					printf("-1");
					return 0;
				}
			}
		}
		if(s[i]=='E'&&s[end-i]=='3') continue;
		else if(s[i]=='A'&&s[end-i]=='A') continue;
		else if(s[i]=='H'&&s[end-i]=='H') continue;
		else if(s[i]=='S'&&s[end-i]=='2') continue;
		else if(s[i]=='T'&&s[end-i]=='T') continue;
		else if(s[i]=='Y'&&s[end-i]=='Y') continue;
		else if(s[i]=='Z'&&s[end-i]=='5') continue;
		else if(s[i]=='b'&&s[end-i]=='d') continue;
		else if(s[i]=='d'&&s[end-i]=='b') continue;
		else if(s[i]=='l'&&s[end-i]=='l') continue;
		else if(s[i]=='n'&&s[end-i]=='n') continue;
		else if(s[i]=='q'&&s[end-i]=='p') continue;
		else if(s[i]=='p'&&s[end-i]=='q') continue;
		else if(s[i]=='r'&&s[end-i]=='7') continue;
		else if(s[i]=='0'&&s[end-i]=='0') continue;
		else if(s[i]=='1'&&s[end-i]=='1') continue;
		else if(s[i]=='2'&&s[end-i]=='S') continue;
		else if(s[i]=='3'&&s[end-i]=='E') continue;
		else if(s[i]=='5'&&s[end-i]=='Z') continue;
		else if(s[i]=='7'&&s[end-i]=='r') continue;
		else if(s[i]=='8'&&s[end-i]=='8') continue;	
		else if(s[i]=='a'&&s[end-i]=='A') s[i]='A';
		else if(s[i]=='B'&&s[end-i]=='d') s[i]='b';	
		else if(s[i]=='y'&&s[end-i]=='Y') s[i]='Y';		
		else if(s[i]=='y'&&s[end-i]=='y') {
			s[i]='Y';
			s[end-i]='Y';	
		}else if(s[i]=='h'&&s[end-i]=='h') {
			s[i]='H';
			s[end-i]='H';	
		}else if(s[i]=='L'&&s[end-i]=='L') {
			s[i]='l';
			s[end-i]='l';	
		}else if(s[i]=='D'&&s[end-i]=='B') {
			s[i]='d';
			s[end-i]='b';	
		}else if(s[i]=='B'&&s[end-i]=='D') {
			s[i]='b';
			s[end-i]='d';	
		}else if(s[i]=='Q'&&s[end-i]=='P') {
			s[i]='q';
			s[end-i]='p';	
		}else if(s[i]=='P'&&s[end-i]=='Q') {
			s[i]='p';
			s[end-i]='q';	
		}else if(s[i]=='a'&&s[end-i]=='a') {
			s[i]='A';
			s[end-i]='A';	
		}else if(s[i]=='t'&&s[end-i]=='t') {
			s[i]='T';
			s[end-i]='T';	
		}else if(s[i]=='N'&&s[end-i]=='N') {
			s[i]='n';
			s[end-i]='n';	
		}
		else if(s[i]=='D'&&s[end-i]=='b') s[i]='d';
		else if(s[i]=='e'&&s[end-i]=='3') s[i]='E';
		else if(s[i]=='h'&&s[end-i]=='H') s[i]='H';
		else if(s[i]=='L'&&s[end-i]=='l') s[i]='l';
		else if(s[i]=='P'&&s[end-i]=='q') s[i]='p';
		else if(s[i]=='Q'&&s[end-i]=='p') s[i]='q';
		else if(s[i]=='R'&&s[end-i]=='7') s[i]='r';
		else if(s[i]=='s'&&s[end-i]=='2') s[i]='S';
		else if(s[i]=='t'&&s[end-i]=='T') s[i]='T';
		else if(s[i]=='N'&&s[end-i]=='n') s[i]='n';
		else if(s[i]=='z'&&s[end-i]=='5') s[i]='Z';		
		else if(s[i]=='h'&&s[end-i]=='H') s[i]='H';
		else if(s[i]=='A'&&s[end-i]=='a') s[end-i]='A';
		else if(s[i]=='b'&&s[end-i]=='D') s[end-i]='d';			
		else if(s[i]=='Y'&&s[end-i]=='y') s[end-i]='Y';		
		else if(s[i]=='d'&&s[end-i]=='B') s[end-i]='b';
		else if(s[i]=='3'&&s[end-i]=='e') s[end-i]='E';
		else if(s[i]=='H'&&s[end-i]=='h') s[end-i]='H';
		else if(s[i]=='l'&&s[end-i]=='L') s[end-i]='l';
		else if(s[i]=='n'&&s[end-i]=='N') s[end-i]='n';
		else if(s[i]=='p'&&s[end-i]=='Q') s[end-i]='q';
		else if(s[i]=='q'&&s[end-i]=='P') s[end-i]='p';
		else if(s[i]=='2'&&s[end-i]=='s') s[end-i]='S';
		else if(s[i]=='T'&&s[end-i]=='t') s[end-i]='T';
		else if(s[i]=='5'&&s[end-i]=='z') s[end-i]='Z';
		else if(s[i]=='7'&&s[end-i]=='R') s[end-i]='r';		
		else if(s[i]=='H'&&s[end-i]=='h') s[end-i]='H';
		else if(s[i]=='m'||s[i]=='M'){
			if(s[end-i]=='m'||s[end-i]=='M'){
				if(s[i]==s[end-i]) continue;
				s[i]='M';
				s[end-i]='M';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='o'||s[i]=='O'){
			if(s[end-i]=='o'||s[end-i]=='O'){
				if(s[i]==s[end-i]) continue;
				s[i]='o';
				s[end-i]='o';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='u'||s[i]=='U'){
			if(s[end-i]=='u'||s[end-i]=='U'){
				if(s[i]==s[end-i]) continue;
				s[i]='u';
				s[end-i]='u';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='v'||s[i]=='V'){
			if(s[end-i]=='v'||s[end-i]=='V'){
				if(s[i]==s[end-i]) continue;
				s[i]='V';
				s[end-i]='V';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='w'||s[i]=='W'){
			if(s[end-i]=='w'||s[end-i]=='W'){
				if(s[i]==s[end-i]) continue;
				s[i]='w';
				s[end-i]='w';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='x'||s[i]=='X'){
			if(s[end-i]=='x'||s[end-i]=='X'){
				if(s[i]==s[end-i]) continue;
				s[i]='X';
				s[end-i]='X';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else if(s[i]=='i'||s[i]=='I'){
			if(s[end-i]=='i'||s[end-i]=='I'){
				if(s[i]==s[end-i]) continue;
				s[i]='I';
				s[end-i]='I';
			}
			else{
				printf("-1");
				return 0;
			}
		}
		else{
			printf("-1");
			return 0;
		}
	}
	printf("%s",s);
}