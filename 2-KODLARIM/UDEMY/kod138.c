#include <stdio.h>

void sirala(int A[],int adet){
	int i,j,gecici;
	for(i=0;i<adet-1;i++){
		for(j=0;j<adet-1;j++){
			for(j=0;j<adet-1-i;j++){
				if(A[j]>A[j+1]){
					gecici=A[j];
					A[j]=A[j+1];
					A[j+1]=gecici;
				}
			}
		}
	}
	int main(void){
		int n;
		int i;
		printf("lutfen kac adet sayi uretilecegini giriniz\n");
		scanf("%d",&n);
		int dizi[100];
		srand(time(0));
		for(i=0;i<n;i++){
			
			dizi[i]=rand(%100);
			printf("%d\n",dizi[i]);
		}
		printf("dizinin sirali hali\n");
		sirala(dizi,n);
		for(i=0;i<n;i++){
			printf("%.4d",dizi[i]);
		}
		return 0;
	}
}
//udemy 98.ders
//udemy54.c
//138
//bilgisayar tarafindan rastgele üretilen n adet sayi bir dizide tutulmaktadir.buna göre asagida verilen onksiyon prototopini kullarak dizi elemanlarinin kucukten buyuge dogru siralanmasýný saglayan c programini fonksiyon kullanrak yaziniz

