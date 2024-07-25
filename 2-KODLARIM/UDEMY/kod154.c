#include <stdio.h>
int topla(int sayi){
	if(sayi==1){
		return 1;
		
	}
	else{
		return sayi+topla(sayi-1);
	}
}
int main(void){
	int n;
	printf("lutfen bir sayi giriniz");
	scanf("%d",&n);
	printf("toplama sonucu=%d",topla(n));
	return 0;
}


//udemy 176.ders
//udemy70.c
//154
//klavyeden girilen bir n pozitif tam sayisina kadar olan sayilarin toplanarak sonucun ekrana gönderilmesini saglayan c programini recursive fonksiyon yardýmýyla yaziniz
