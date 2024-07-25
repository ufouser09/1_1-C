#include <stdio.h>

int main(void){
	char dizi[MAX]={'k','l','b','d','i','s','t','e','f','o','r','c','h','x'};
	char *sayi1;
	char *sayi2;
	char dizi_kopya[MAX];
	int i;
	
	sayi2=dizi_kopya;
	
	for(sayi1=dizi;sayi1<dizi+MAX;sayi1++){
		*sayi2=*sayi1;
		sayi2++;
	}
	printf("original tablo:");
	
	for(i=0;i<max;i++){
		printf("%c",*(dizi+i));
	}
	printf("\nkopya tablo:");
	for(i=0;i<MAX;i++){
		printf("%c",*(dizi_kopya+i));
	}
	return 0;
}
//udemy93.c
//udemy 140.ders
//177
//k l b d q i s t e f o r c h x elemanlari içeren bir karakter dizisi tanýmlayýn
//2 pointer ve bir for dongusu kullanarak bu dizinin aynýsý kopyalayýn ve ekrana bastýrýnn 
