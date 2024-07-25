#include <stdio.h>
#define N 10


int main(void){
	int i,min,max;
	int *canan;
	int can[N];
	printf("%d kadar deger giriniz,N");
	for(canan=can;canan<can+N;canan++){
		scanf("%d",canan);
	}
	max=min=can[0];
	for(canan=can+1;canan<can+N;canan++){
		if(*canan>max){
			max=*canan;
		}
		if(*canan<min){
			min=*canan;
		}
	}
	printf("dizimizin maksimum degeri:%d\n",max);
	printf("dizimizin minimum degeri:%d\n",min);
	
	
	return 0;
	
}
//udemy 134.ders
//udemy85.c
//169
//10 tane integer tipinde elemani olan bir dizi tanýmlayýn ve bu elemanlarý kullanicinin girmesini saglayin
//pointer yardýmýyla dizideki elemanlarin en buyuk ve en kucuk degerini bulun
//programi asagidaki gibi yazin
//10 adet eleman girin
/*1
2
5
8
11
5
6
85
42
49
en buyuk degeri:85
//en kucuk deger:1 */
