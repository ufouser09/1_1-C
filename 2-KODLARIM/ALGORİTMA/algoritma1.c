#include <stdio.h>

int main(){
	//degiskenleri tan�mlad�k
	int yas,yil,dogumYili;
	
	
	//kullan�c�dan yillari aldik
	printf("lutfen yili giriniz \n");
	scanf("%d",&yil);
	
	
	//kullan�c�dan dogum yilini aldik
	printf("lutfen dogum yilinizi giriniz \n");
	scanf("%d",&dogumYili);
	
	
	//yas'� hesaplad�k
	 yas=yil-dogumYili;
	
	
	//yas'� yazd�r
	printf("kullanicinin yasi =%d",yas);
}
//denendi ve compile edildi
//dogum tarihi verilen ki�inin ya��n� bulan algoritma ve programi
//sayfa 1
//kod cal�s�yor
