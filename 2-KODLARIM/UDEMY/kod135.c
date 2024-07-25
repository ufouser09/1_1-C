#include <stdio.h>

int mukemmel(int n){
	int i=1;
	int toplam=0;
	
	while(i<n){
		if(n%i==0){
			toplam=toplam+i;
		}
		i++;
	}
	if(toplam==n){
		return 1;
	}
	else{
		return 0;
	}
}
int main(void){
	int sayi;
	int sonuc;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	sonuc=mukemmel(sayi);
	if(sonuc==1){
		printf("sayi gercekten mukemmel");
	}
	else{
		printf("sayi mukemmel degil");
	}
	
	return 0;
}
//udemy89.ders
//udemy51..c
//135
//kendisi haric pozitif tam bölenlerinin toplami kendisine esit olan sayilara mukemmel sayi denir.buna göre klavyeden girilen bir sayinin mükemmel olup olmadigini fonksiyon kullanrak bulan c progrmaini yaziniz
