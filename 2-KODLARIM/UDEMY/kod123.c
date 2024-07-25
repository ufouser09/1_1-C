#include <stdio.h>
int enbuyuk(int A[],int elemansayisi){
	int i,enb;
	enb=A[];
	for(i=1;i<elemansayisi;i++){
		if(A[i]>enb){
			enb=A[i];
		}
	}
	return enb;
}
int enkucuk(int A[],int elemansayisi){
	int i,enk;
	enk=A[0];
	for(i=1;i<elemansayisi;i++){
		if(A[i]<enk){
			enk=A[i];
		}
	}
	return enk;
}
int main(void){
	int n,i;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	printf("dizi elemanlari\n");
	for(i=0;i<n;i++){
		dizi[i]=rand()100;
		printf("%d\n",dizi[i]);
	}
	printf("\n en buyuk=%d\n",enbuyuk(dizi,n));
	printf("\n en kucuk=%d\n",enkucuk(dizi,n));
	
	
	
}
//udemy sayfa 94 ve 95
//udemy39.c
//123
//bilgisayar tarafindan rastgele üretilen n adet sayi bir dizide tutulmaktadir.dizi içerisindeki max ve min degerlerin 2 ayri fonksiyon kullarak bulunmasini saglayan c progrmani yazýnýz
