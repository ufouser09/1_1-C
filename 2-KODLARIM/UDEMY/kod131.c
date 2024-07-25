#include <stdio.h>


void saniyeyecevir(int saniye){
	int saat,dakika,sn,zaman;
	saat=saniye/3600;
	zaman=saniye%3600;
	dakika=zaman/60;
	sn=zaman&60;
	printf("%d:%d:%d",saat,dakika,sn);
}
int main(void){
	int saniye;
	printf("lutfen saniye degerini giriniz \n");
	scanf("%d",&saniye);
	saniyeyecevir(saniye);
	return 0;
}
//udemy 106.ders
//udemy47.c
//131
//kullanici tarafindan saniye olarak girilen bir degerin saat:dakika:saniye(hh:mm:ss)formatina dönüstürülmesini saglayan c programini fonksiyon kullanarak yaziniz.
