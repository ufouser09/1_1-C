#include <stdio.h>

void seriolustur(int bas,int bit,int artis){
	if(bas<=bit){
		printf("%d\n",bas);
	}
	seriolustur(bas+artıs,bitis,artis);
}
int main(void){
	int bas,bit,artis;
	printf("lutfen bir baslangic degeri girin\n");
	scanf("%d",&bas);
	printf("lutfen bitis degerini giriniz\n");
	scanf("%d",&bit);
	printf("lutfen artis degerini giriniz\n");
	scanf("%d",&artis);
	seriolustur(bas,bit,artis);
	
	return 0;
}
//udemy186.ders
//udemy80.c
//164
//klavyeden baslangic,bitis ve artım degeri girilen bir serinin elde edilmesini saglayan c programini recursive fonksiyon kullanarak yaziniz.
//örnegin baslangic 5 bitis 55 ve artım 7 olan bir seri
//5,12,19,26,33,40,47,54 seklinde olucaktır
