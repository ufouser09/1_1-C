#include <stdio.h>
void bolmeislemi(int bolunen,int bolen ){
	int kalan,bolum;
	kalan=bolunen%bolen;
	bolum=bolunen/bolen;
	printf("kalan =%d bolum=%d",kalan,bolum);
}

int main(void){
	int bolunen,bolen;
	printf("lutfen bolunen sayiyi giriniz \n");
	scanf("%d",&bolunen);
	printf("lutfen bolen sayiyi giriniz \n");
	scanf("%d",&bolen);
	bolmeislemi(bolunen,bolen);
	return 0;
}
//udemy 102.ders
//udemy 44.c
//128
//kullanici tarafindan b�l�nen ve bolen degerleri girilerek b�lme islemi yap�lmak istenmektedir.buna g�re asag�da verilen prototopi kullanarak b�l� ve kalanini elde edilmesini saglayan c programini yaz�n�z
