#include <stdio.h>


float ortalamaistanbul(int*dizim,int boyut){
	int i;
	int toplam=0;
	for(i=0;i<boyut;i++){
		toplam +=dizim[i];
	}
	return (float)toplam/boyut;
}

int main(void){
	int n;
	int i;
	float ort;
	printf("kac adet eleman girilecek\n");
	scanf("%d",&n);
	int dizi[n];
	for(i=0;i<n;i++){
		printf("%d.sayiyi giriniz\n",i+1);
		scanf("%d",&dizi[i]);
	}
	ort=ortalamaistanbul(dizi,n);
	printf("girdigimiz sayilarin ortalamasi %.3f",ort);
	
	return 0;
}
//udemy 103.ders
//udemy 45.c
//129
//kullanici tarafindan n elemanli bir diziye alinan tamsayilarin ortalamasini bulunmasiniii saglayan fonksiyon prototopi asagida verilmistir.
//buna göre prototopi kullanarak c progamini yaziniz
