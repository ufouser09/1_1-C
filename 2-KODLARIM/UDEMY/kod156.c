#include <stdio.h>
int fakt(int sayi){
	int sonuc;
	if(sayi!=0){
		sonuc=sayi*fakt(sayi-1);
	}
	else
	sonuc=1;
}
int main(void){
	int n;
	printf("lutfen bir deger giriniz");
	scanf("%d",&n);
	printf("faktoriyel=%d",fakt(n));
	
	return 0;
}
//udemy 178.ders
//udemy72.c
//156
//klavyeden girilen bir n pozitif tam sayisina kadar olan sayilarin faktoriyel hesaplanmasini saglayan c programini recursive fonksiyon yardýmýyla yaziniz

