#include <stdio.h>
int buyukolan (int a,int b){
	if(a>b){
		return 1;
	}
	else if(a<b){
		return 0;
	}
	else{
		return 2;
	}
}
int main(void){
	int sayi1,sayi2;
	int sonuc;
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	sonuc=buyukolan(sayi1,sayi2);
	
	if(sonuc==1){
		printf("%d %d den buyuktur",sayi1,sayi2);
	}
	else if(sonuc==0){
		printf("%d %d den buyuktur",sayi2,sayi1);
	}
	else{
		printf("%d %d ye esittir",sayi1,sayi2);
	}
	return 0;
}
//udemy sayfa 89
//udemy34.c
//118
//klavyeden girilen 2 tam sayidan buyuk olanini fonksiyon kullanarak bulan c programini yaziniz
