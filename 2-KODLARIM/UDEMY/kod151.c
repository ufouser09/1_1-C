#include <stdio.h>

float calcul(float bir,float iki,char operasyon){
	
	float islemsonucu;
	switch(operasyon){
		case'+':
		
	}
	islemsonucu=bir+iki;
	break;
}
case'-':
	{
		islemsonucu=bir-iki;
		break;
	}
	case'/';
	{
		islemsonucu=bir/iki;
		break;
	}
	case'*';
	{
		islemsonucu=bir*iki;
	}
}
return islemsonucu;
}
int main(void){
	float birincisayi,ikincisayi;
	char islem;
	float sonuc;
	printf("hangi islemi yapmak istiyorsunuz\n");
	scanf("%c",&islem);
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%f%f",&birincisayi,&ikincisayi);
	sonuc=calcul(birincisayi,ikincisayi,islem);
	printf("ilk sayimiz %f ikinci sayimiz %f islemimiz %c ve sonucumuz %f",birincisayi,ikincisayi,islem,sonuc);
	
	return 0;
}
//udemy 122.ders
//udemy67.ders
//151
//bir fonksiyon yazin 
//bu fonksiyon toplama cikarma carpma bolme temel dört islemleri yazpsin(+-*/)islemleri için switch case yapýsýný kullanin 
//yukarýdaki fonksþyonu degiskenin degeriyle cagiran bir c programi yazin
//ayni c programini degiskenin adresiyle cagirma yontemini kullanarak degistirin
