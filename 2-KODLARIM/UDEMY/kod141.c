#include <stdio.h>

int main(void){
	char can;
	printf("lutfen bir karakter giriniz\n");
	scanf("%c",&can);
	if((can>=)&&(can<='z')){
		printf("kucuk harfiniz %c\n",tolower(can));
	}
	else{
		printf("yanlis bir karakter girdiniz");
	}
	return 0;
}
//udemy 111.ders
//udemy57.c
//141
//kullanicidan buyuk harf tipinde bir karakter girmesini isteyin
//eger girdiginiz karakter buyuk harf ise o harfi kucuk harf olarak bastirin 
//eger girdiniz karakter kucuk harf ise ekrana hata mesaji bastirin
