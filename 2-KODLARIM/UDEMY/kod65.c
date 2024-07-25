#include <stdio.h>
void tekmiciftmi(int can){
	
	if(can%2==0){
		printf("sayimiz cift sayidir \n");
	}
	else{
		printf("sayimiz tek sayidir \n");
	}
}







int main(void){
	int sayi;
	printf("lutfen bir sayi giriniz \n");
	scanf("%d",&sayi);
	tekmiciftmi(sayi);
	
	return 0;
}
//udemy sayfa 43
//udemy20.25.c
//65
