#include <stdio.h>
#define CAN 10


int main(void){
	int i;
	int max,min;
	int dizi[CAN];
	printf("lutfen %d kadar deger giriniz\n",CAN);
	for("i=0;i<CAN;i++"){
		scanf("%d",&dizi[i]);
	}
	max=min=dizi[0];
	for(i=1;i<CAN;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
		if(dizi[i]<min){
			min=dizi[i];
		}
	}
	printf("maximum deger:%d\n",max);
	printf("minimum deger:%d\n",min);
	
	return 0;
}
//udemy116.ders
//udemy 62.c
//146
//10 tane integer tipinde deger tutan bir dizi tanýmlayýnýz 
//dizinin tüm elemanlarini kullanicinin girmesini isteyiniz
//dizinin en buyuk ve en kucuk elemanlarýný bulup bastýrýnýz.for yapýsný kullanýnýz
