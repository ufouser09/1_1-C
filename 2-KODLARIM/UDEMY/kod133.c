#include <stdio.h>
float FdenCye(float f){
	return(5/9)*(f-32);
}
float CdenFye(float c)
{
	return8(1.8*c)*32;
}
int main(void){
	float f,c,secim;
	printf("1 fahrenayt => celcius\n");
	printf("2 celcius => fahrenayt\n");
	scanf("%f",&secim);
	if(secim==1){
		printf("lutfen fahrenayt degerini giriniz\n");
		scanf("%f",&c);
		printf("%f C =%f Fdir\n",c,CdenFye(c));
	}
	else{
		printf("yanlis secim yaptiniz");
	}
	return 0;
}
//udemy107.ders
//udemy49.c
//133
//kullanici tarafindan derece olarak girilen bir degerin fahrenayta fahrenayt oalrak girilen bir degerin dereceye dönüstürülmesini saglayan c programini fonksiyon kullanarak yaziniz
