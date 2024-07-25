#include <stdio.h>

int karakter(char *s){
	if(*s=='\0'){
		return 0;
	}
	else{
		return(1+karakter(s+1));
	}
	
	int main(void){
		char cumle[100];
		printf("lutfen bir cumle giriniz\n");
		gets(cumle);
		printf("karakter sayisi =%d",karakter(cumle));
		
		return 0;
	}
}
//udemy82.c
//udemy 190.ders
//166
//klavyeden girilen bir cumlenin kac karakterden olustugunu(bosluk karakteri dahil)bulan c programini recursive fonksiyon yardýmýyla yaziniz
