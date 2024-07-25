#include <stdio.h>

int main(void){
	int i,j;
	printf("%4c",'I');
	
	
	for(i=1;i<=CAN;i++){
		printf("%4d",i);
	}
	printf("\n");
	printf("-----------");
	for(i=1;i<CAN;i++){
		printf("--------");
	}
	printf("\n");
	for(i=1;i<=CAN;j++){
		printf("%4d",i);
		for(j=1;j<=CAN;j++){
			printf("\n");
		}
	}
	return 0;
	
}
//udemy118.ders
//udemy63.c
//147
//10 a 10 boyutunda bir carpim tablosu olusturun ve ekrana bastýrýn 
