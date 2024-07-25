#include <stdio.h>


int main(void){
	char*gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
	int i;
	
	do{
		printf("lutfen 1 ve 7 arasinda bir deger giriniz:\n");
		scanf("%d",&i);
	}
	while(i<=0||i>7);
	printf("%d numarali haftanin gunu %s",i,gun[i-1]);
	
	return 0;
}
//udemy 143.ders
//udemy90.c
//174
//kullancidan 1 ile 7 arasinda bir deger girmesini isteyin bu degerler haftanin günlerini belirtiyor
//7 adet karakter dizisi yani haftanin günlerini tutan bir pointer yaziniz
//kullanici 1 ile 7 arasinda  bir deger girmez ise tekrar deger girmesini isteyin
//örnek c programi asagidaki gibidir
