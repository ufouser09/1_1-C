#include <stdio.h>
#define VERG�_kitap 4.0
#define VERG�_temelgida 5.6
#define VERG�_luks 19.6
#define K�TAP 0
#define TEMELG�DA 1
#define LUKS 2

int main(void){
	int kod;
	float fiyat;
	
	printf("lutfen urunun fiyatini ve kodunu giriniz\n");
	scanf("%f %d",&fiyat,&kod);
	
	printf("urunumuzun satis fiyati:");
	
	if(kod==K�TAP){
		printf("fiyatimiz %f",fiyat + fiyat*vergi_kitap/100);
	}
	else if(kod==TEMELG�DA){
		printf("fiyatimiz %f",fiyat+fiyat*VERG�_temelgida/100);
	}
	else if(kod==luks){
		printf("fiyatimiz %f",fiyat+fiyat*VERG�_luks/100);
	}
	else {
		printf("boyle bir urun yoktur.lutfen adam gibi kod girin");
	}
	return 0;
}
//udemy 115.ders
//udemy61.c
//145
//uc adet urunumuz var:kitap,temel gida ve luks
//devlet her uc gruba farkl� oranlarda vergi uyguluyor.kitap i�in %4.0 temel gida i�in %5.6 luks urun gamm� i�in %19.6
//her urununun bir kodu var:kitabin kodu 0,temel gidanin kodu 1,luks urununun kodu 2
//kullanicidan istediginiz �r�n�n kodunu ve fiyat�n� isteye daha sonra switch case yap�s�n� kullanarak son fiyati ekrana bastiran bir c progrmaini yaziniz
//ayni programi if else yap�s� kullanarak yaziniz
