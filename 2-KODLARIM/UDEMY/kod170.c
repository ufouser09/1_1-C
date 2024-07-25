#include <stdio.h>
int faktoriyel(int *sayi){
	int sonuc=1;
	int i;
	for(i=*sayi;i>=1;i--){
		sonuc *=(*sayi);
		(*sayi)--;
	}
	return sonuc;
}
int main(void){
	int n,orijinalsayi;
	printf("lutfen faktoriyeli alinacak sayiyi giriniz\n");
	scanf("%d",&n);
	orijinalsayi=n;
	printf("%d !=%d",orijinalsayi,faktoriyel(&n));
	
	
	return 0;
}
//udemy135.ders
//udemy86.c
//170
//kullanici tarafindan N pozitif tam sayisinin faktoriyelinin hesaplanmasýný saglayan fonksiyon prototopi asagida verilmistir.buna göre 
//asagidaki prototopi kullanarak c programini yaziniz
//int faktoriyel(int *sayi)
