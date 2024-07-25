#include <stdio.h>



double karekokbul(double n){
	double karekok;
	int i;
	if(n>0,0){
		karekok=n/2;
		for(i=0;i<50;i++){
			karekok=((karekok*karekok)+n)/(2*karekok);
		}
		return karekok;
	}
	else if(n==0){
		
	}
	return 0;
}
else{
	printf("lutfen gecerli bir deger giriniz \n");
}
}
int main(void){
	double sayi;
	printf("karekoku bulunacak sayilar\n");
	scanf("%1f",&sayi);
	printf("%1f karekoku = %.51f\n",sayi,karekokbul(sayi));
	return 0;
}
//udemy 104.ders
//udemy 46.c
//130
//kullanici tarafindan girilen bir n pozitif tamsayisinin karekökünün bulunmasini saglayan (sqrt()kullanmadan)programini fonksiyon kullanarak yaziniz(a:girilen sayi)
//k=a/2
//karekök=toplam 1 den 50 ye kadar k^2+a/2k*/
