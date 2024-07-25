#include <stdio.h>


int can(int n){
	if(n%2==0){
		return 1;
	}
		else{
		
		return 0;
}
	}
	int main(int n){
		if(n%3==0)
		return 1;
		else
		return 0;
	}
	
	int main(void){
		int n;
		printf("bir sayi giriniz\n");
		scanf("%d",&n);
		if(can(n==1)){
			printf("sayimiz cift sayidir\n");
		}
		if(man(n)==1)){
			printf("sayimiz 3 ile tam bolunur");
		}
		if(can(n)==1 && man(n)==1){
			printf("sayimiz 6 ile tam bolunur");
		}
	}
	return 0;
}
//udemy 120.ders
//udemy65.c
//149
//2 adet fonksiyon yazin 
//1.fonksiyon:girilen sayinin 2 nin kati oldugnu gösterir
//2.fonksiyon:girilen sayinin 3 un kati oldugnu gösterir
//bu iki fonksiyonu kullanarak bir c programi yazin.bu program kullanicinin girdigi degerin cýft olup olmadigini 3 un katý olup olmadýgýný,6nýn kati olup olmadigini belirlesin ve ekrana yazdirsin
//ayni c proogramini fonksþyon degiskenin adresiyle cagýrýp yazin
//ornek program cýktýsý asagidaki gibidir
//bir sayi giriniz:9
//girdiginiz sayi 3un katýdýr
