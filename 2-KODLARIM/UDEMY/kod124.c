#include <stdio.h>
void kayitsil(int a[],int sira,int elemansayisi){
	int i;
	if(sira>=elemansayisi+1){
		printf("gecerli bir sira numarasi giriniz\n");
		
	}
	else{
		for(i=sira-1;i<elemansayisi-1;i++){
			A[i]=a[i+1];
		}
		printf("kayit silindikten sonraki durum\n");
		for(i=0;i<elemansayisi-1;i++{
			printf("%d",A[i]);
	}
}
}
int main(void){
	int n;
	int i;
	int sirano;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("\n silinece degerin sira numarasýný giriniz \n");
	scanf("%d\n",&sirano);
	kayitsil(dizi,sirano,n);
	
	return 0;
	
}
//udemy 96. ders
//udemy40.c
//124
//bilgisayar tarafindan rastgele üretilen n adet sayi bir dizide tutulmaktadir
