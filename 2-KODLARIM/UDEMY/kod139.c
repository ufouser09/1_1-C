#include <stdio.h>
void ekle(int A[],int sirano,int deger,int elemansayisi){
	int i;
	if(sirano<=elemansayisi+1){
		for(i=elemansayisi-1;i>=sirano-1;i--){
			A[i+1]=A[i];
		}
		A[sirano-1]=deger;
		
		printf("dizimizin eklenmis hali\n");
		for(i=0;i<=elemansayisi;i++){
			printf("%d\n",A[i]);
		}
	}
	else{
		printf("gecerli bir sira numarasi giriniz\n");
	}
}
int main(void){
	int i,sirasi;
	int n,deger;
	printf("kac adet sayi uretilecek\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++){
		dizi[i]=rand()%100;
	}
	for(i=0;i<n;i++){
		printf("%d\n",dizi[i]);
	}
	printf("hangi siraya eleman eklenecek\n");
	scanf("%d",&sirasi);
	printf("eklenecek sayi nedir?\n");
	scanf("%d",&deger);
	ekle(dizi,sirasi,deger,n);
	
	return 0;
}
//udemy 99.ders
//udemy 55.c
//139
//bilgisayar tarafindan rastgele uretilen n adet sayi bir dizide tutulmadktadir.dizi iverisinde dizi sira numarasii belirterek klavyden alinan bir tam sayinin ikili sraya eklenmesini saglayan c programini fonksiyon olarak yaziniz.

