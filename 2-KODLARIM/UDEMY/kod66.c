#include <stdio.h>
int tekmiciftmi(int can){
	if(can%2==0){
		return 1;
	}
	else{
		return 0;
	}
}






int main(){
	int sayi,sonuc;
	printf("lutfen bir sayi giriniz \n");
	scanf("%d",&sayi);
	
	sonuc=tekmiciftmi(sayi);
	
	if(sonuc==1){
		printf("sayimiz cift sayidir");
	}
	if(sonuc==0){
		printf("sayimiz tek sayidir");
	}
	return 0;
}
//udemy sayfa 44
//udemy20.26.c
//66
