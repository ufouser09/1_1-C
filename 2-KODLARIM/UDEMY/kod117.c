#include <stdio.h>
void saiiste(){
	
	int sayi;
	while(1){
		printf("lutfen bir sayiyi giriniz\n");
		scanf("%d",&sayi);
		if(sayi<0){
			break;
		}
	}
}
int main(void){
	sayiiste();
	return 0;
}
//udemy sayfa 88
//udemy33.c
//117
