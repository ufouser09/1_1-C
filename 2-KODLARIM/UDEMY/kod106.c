#include <stdio.h>
#define tavhiz 0.038
#define kushiz 0.012

int main(){
	float tavsan=1042,kus=2272;
	int yil=0;
	
	while(tavsan<kus){
		tavsan += tavsan*tavhiz;
		kus +=kus*kushiz;
		yil++;
		printf("%d.yil:tavsan=%d kus=%d \n",yil,(int)tavsan,(int)kus);
	}
	printf("tavsanlar kuslar� %d.yilda gecer",yil);
	
	return 0;
}
//udemy 76.sayfa
//udemy 22.c
//106
