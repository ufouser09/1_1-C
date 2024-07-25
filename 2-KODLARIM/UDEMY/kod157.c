#include <stdio.h>


void teksayilar(int baslangic,int bitis){
	if(baslangic<=bitis){
		printf("%d",baslangic);
		teksayilar(baslangic+2,bitis);
	}
}
int main(void){
	int n,duzeltme;
	printf("lutfen bir sayi giriniz");
	scanf("%d",&n);
	if(n%2==1){
		duzeltme=n;
	}
	else{
		duzeltme=n-1;
	}
	teksayilar(1,duzeltme);
	return 0;
}
//udemy 179.ders
//udemy73.c
//157
//klavyeden girilen bir n pozitif tam sayisina kadar olan tek sayilarin ekrana listelenmesini saglayan c programini recursive fonksþyon yardýmýyla yaziniz
