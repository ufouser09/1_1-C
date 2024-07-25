#include <stdio.h>

int carpim(int sayi1,int sayi2){
	int sonuc;
	if(sayi==1){
		sonuc=sayi1;
	}
	else{
		sonuc=sayi1+carpim(sayi1,sayi2-1);
	}
	return sonuc;
}
int main(void){
	int a,b;
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d%d",&a,&b);
	printf("%d carpi %d = %d",a,b,carpim(a,b));
	return 0;
}
//udemy 177.ders
//udemy 71.c
//155
//klavyeden girilen iki tam sayinin carpiminin carpim sembolu kullanmadan gerceklestiren c programini recursive fonksiyon yardýmýyla yaziniz
