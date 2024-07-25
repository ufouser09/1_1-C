#include <stdio.h>
int faktoriyel(int sayim){
	int i;
	int sonuc=1;
	for(i=1;i<=sayim;i++){
		sonuc=sonuc*i;
	}
	return sonuc;
}
int main(void){
	int sayi;
	printf("lutfen bir sayi giriniz");
	scanf("%d",&sayi);
	printf("%d!=%d",sayi,faktoriyel(sayi));
	return 0;
}
//udemy sayfa 86
//udemy31.c
//115
