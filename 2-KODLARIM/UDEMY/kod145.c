#include <stdio.h>
#define VERGÝ_kitap 4.0
#define VERGÝ_temelgida 5.6
#define VERGÝ_luks 19.6
#define KÝTAP 0
#define TEMELGÝDA 1
#define LUKS 2

int main(void){
	int kod;
	float fiyat;
	
	printf("lutfen urunun fiyatini ve kodunu giriniz\n");
	scanf("%f %d",&fiyat,&kod);
	
	printf("urunumuzun satis fiyati:");
	
	if(kod==KÝTAP){
		printf("fiyatimiz %f",fiyat + fiyat*vergi_kitap/100);
	}
	else if(kod==TEMELGÝDA){
		printf("fiyatimiz %f",fiyat+fiyat*VERGÝ_temelgida/100);
	}
	else if(kod==luks){
		printf("fiyatimiz %f",fiyat+fiyat*VERGÝ_luks/100);
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
//devlet her uc gruba farklý oranlarda vergi uyguluyor.kitap için %4.0 temel gida için %5.6 luks urun gammý için %19.6
//her urununun bir kodu var:kitabin kodu 0,temel gidanin kodu 1,luks urununun kodu 2
//kullanicidan istediginiz ürünün kodunu ve fiyatýný isteye daha sonra switch case yapýsýný kullanarak son fiyati ekrana bastiran bir c progrmaini yaziniz
//ayni programi if else yapýsý kullanarak yaziniz
