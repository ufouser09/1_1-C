#include <stdio.h>
#include <math.h>
int main(){
	int x,y,xx,yy,c;
	printf("lutfen x degerini giriniz\n");
	scanf("%d",&x);
	
	printf("lutfen y degerini giriniz\n");
	scanf("%d",&y);
	
	xx=abs(x);
	yy=abs(y);
	
	c=xx+yy;
	if(c==1){
		printf("uzerinde");
	}
	else if(c>1){
		printf("disinda");
	}
	else{
		printf("icinde");
	}
	return 0;
}
