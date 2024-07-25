#include <stdio.h>

int ikininkuvvetleri(int n){
	int deger;
	if(n==0){
		deger=1;
	}
	else{
		deger=2*ikininkuvvetleri(n-1);
	}
	printf("%d\n",deger);
	return deger;
}
int main(void){
	int sayi;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&sayi);
	printf("%d ye kadar olan 2 nin kuvvetleri\n",sayi);
	ikininkuvvetleri(sayi);
	
	return 0;
}
//udemy 78.c
//udemy 184.ders
//162
//klavyeden girilen bir n tam sayisina kadar 2nin kuvvetlerinin listelenmesini saglayan c programini recursive fonksiyon kullanarak yaziniz
//1
//2
//3
//8
//seklinde olucaktır
