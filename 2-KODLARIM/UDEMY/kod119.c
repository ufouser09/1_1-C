#include <stdio.h>
int tekcift(int n){
	
	return n%2;
}
int main(void){
	int sayi;
	int sonuc;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	sonuc=tekcift(sayi);
	if(sonuc==1){
		printf("sayimiz tektir");
	}
	else{
		printf("sayimiz cifttir");
	}
	return 0;
}
//udemy sayfa 90
//udemy35.c
//119
