#include <stdio.h>

int main() {
	char a[15];
	int t = 0;
	while(scanf("%s",&a)==EOF);
	for(int i=0;i<15;i++){
		if(a[i]=='\0')break;
		switch (a[i]){
			case 'A':
			case 'B':
			case 'C':
				t+=3;
				break;
			case 'D':
			case 'E':
			case 'F':
				t+=4;
				break;
			case 'G':
			case 'H':
			case 'I':
				t+=5;
				break;
			case 'J':
			case 'K':
			case 'L':
				t+=6;
				break;
			case 'M':
			case 'N':
			case 'O':
				t+=7;
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				t+=8;
				break;
			case 'T':
			case 'U':
			case 'V':
				t+=9;
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				t+=10;
				break;
		}
	}
	printf("%d",t);
}