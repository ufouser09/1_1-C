#include <stdio.h>
int main(){
	char cumle[100];
	int i;
	printf("lutfen bir cumle giriniz \n");
	gets(cumle);
	
	while(cumle[i]){
		i++;
	}
	printf("cumledeki karakter sayisi:%d\n",i);
	
	return 0;
}
//udemy sayfa 78
//udemy24.c
//108
//klavyeden girilen bir cumlenin kac karakterden olustugunu strlen fonksiyonu kullanmadann bulan c progamini yaziniz
