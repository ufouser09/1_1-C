#include <stdio.h>
#define pi 3.14

void hesapla(float yaricap){
	float alan,cevre;
	alan=pi*yaricap*yaricap;
	cevre=2*pi*yaricap;
	printf("dairenin alani=%.4f\n",alan);
	printf("dairenin alani=%.2f",cevre);
}
int main(void){
	float yaricap;
	printf("lutfen yaricap degerini giriniz\n");
	scanf("%f",&yaricap);
	hesapla(yaricap);
	return 0;
}
//udemy 100.ders
//udemy42.c
//126
//kullanici tarafindan girilen yaricap degeri kullanilarak bir dairenin alanini ve cevresini hesaplayan fonksiyon prototopi asagida verilmistir.c programini ve fonksiyonunu yaziniz
