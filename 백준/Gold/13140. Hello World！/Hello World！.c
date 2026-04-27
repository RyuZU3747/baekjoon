#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int d,e,h,l,o,r,w,ans,cmp=0;
	scanf("%d",&ans);
	for(h=1;h<10;h++){
		for(e=0;e<10;e++){
			if(e==h)continue;
			for(d=0;d<10;d++){
				if(e==d||h==d)continue;
				for(l=0;l<10;l++){
					if(h==l||e==l||d==l)continue;
					for(o=0;o<10;o++){
						if(h==o||e==o||d==o||l==o)continue;
						for(r=0;r<10;r++){
						if(h==r||e==r||d==r||l==r||o==r)continue;
							for(w=1;w<10;w++){
							if(h==w||e==w||d==w||l==w||o==w||r==w)continue;	
								cmp=0;
								cmp+=h*10000+e*1000+l*100+l*10+o;
								cmp+=w*10000+o*1000+r*100+l*10+d;
								if(ans==cmp){
									printf("  %d%d%d%d%d\n",h,e,l,l,o);
									printf("+ %d%d%d%d%d\n",w,o,r,l,d);
									printf("-------\n");
									printf("%7d",ans);
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}
	printf("No Answer");
}