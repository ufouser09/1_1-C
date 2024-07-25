#include <stdio.h>

int asalmi(int sayi,int i){
	if(i==1){
		return 1;
	}
	else if(sayi%i==0){
		return 0;
	}
	else {
		asalmi(sayi,i-1);
	}
}
int main(void){
	int n,i,kontrol;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		kontrol=asalmi(i,i/2);
		if(kontrol==1){
			printf("%d\n",i);
		}
	}
	return 0;
}
//udemy74.c
//udemy180.ders
//158
//kavyeden girilen bir n pozitif tam sayisina kadar olan asal sayilarin ekrana listelenmesini saglayan c programini recursive fonksiyon yardimiyla yaziniz
