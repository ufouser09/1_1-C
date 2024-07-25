#include <stdio.h>

void yildiz(int limit){
	int i;
	if(limit==0){
		return 0;
	}
	else{
		for(i=0;i<limit;i++){
			printf("  *");
			
		}
		printf("\n");
		yildiz(limit-1);
	}
}
int main(void){
	int us;
	printf(lutfen üst sinir yildiz sayisini giriniz\n);
	scanf("%d",&ust);
	printf("\n\n\n");
	yildiz(ust);
	
	return 0;
}
//udemy 189.ders
//udemy 81.c
//165
//klavyeden girilen bir n sayisindan baslayarak asagi yönde azalacak sekilde ekrana yildiz basan c programini recursive fonksiyon yardimiyla yaziniz
//örnek ekran görüntüsü
//* * * * * * *
//* * * * * *
//* * * * *
//* * * *
//* * *
//* *
//*
