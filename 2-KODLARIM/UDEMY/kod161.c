#include <stdio.h>

void sayiiste(){
	int sayi;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	if(sayi==0){
		exit(0);
	}
	sayiiste();
}

int main(void){
	sayiiste();
	return 0;
}
//udemy77.c
//udemy 183.ders
//161
//klavyeden 0 degeri girilinceye kadar kullanýcýdan sürekli olarak sayi girmesini isteyen c programini recursive fonksiyon yardýmýyla yaziniz
