#include <stdio.h>

int main(void){
	int dizi[15]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int *pointer;
	int i;
	printf("dizimizin ilk hali :\n");
	for(i=0;i<15;i++){
		printf("%4d",*(dizi+i));
	}
	printf("\n");
	printf("dizimizdeki cift sayilar :\n");
	for(i=0;i<15;i +=2){
		printf("%4d",*(dizi+i));
	}
	printf("\n");
	printf("dizimizde bulunan sayilar:\n");
	for(pointer=dizi+1;pointer<dizi+15;pointer +=2){
		printf("%4d",*pointer);
	}
	return 0;
}
//udemy 92.c
//udemy139.ders
//176
//0 dan 14 e kadar olan degerleri dizide tanýmlayýn 
//dizinin içindeki tek elemanlari bastirin
//programi pointer kullanarak yaziniz
